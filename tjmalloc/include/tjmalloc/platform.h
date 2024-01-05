#pragma once

#include <cstdint>
#include <cstddef>
#include <type_traits>
#include <concepts>

namespace tjmalloc {

template <typename Pf>
concept is_platform = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.page_size)>, ::std::size_t>; // usually 4KiB
};

template <typename Pf>
concept is_platform_has_smallest_allocation_size = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.smallest_allocation_size)>, ::std::size_t>;  // smallest allocation size (on Windows 64KiB)
};

template <typename Pf>
concept is_platform_support_large_page = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.large_page_size)>, ::std::size_t>; // usually 2MiB
};

template <typename Pf>
concept is_platform_support_huge_page = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.huge_page_size)>, ::std::size_t>; // usually 1GiB
};

template <typename Pf>
concept is_platform_has_overcommit = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.has_overcommit)>, bool>;  // default is false (if true we use MAP_NORESERVE on mmap systems)
};

template <typename Pf>
concept is_platform_has_must_free_whole = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.must_free_whole)>, bool>; // default is true (on mmap systems we can free anywhere in a mapped range, but on Windows we must free the entire span)
};

template <typename Pf>
concept is_platform_has_virtual_reserve = requires(Pf&& t) {
	requires ::std::same_as<::std::remove_cvref_t<decltype(t.has_virtual_reserve)>, bool>;  // default is false (if true we can reserve virtual address space without using commit or physical memory)
};

template <typename Pf>
concept is_platform_has_init = requires(Pf&& t) {
	t.init();
};

template <is_platform Pf>
inline constexpr ::std::size_t get_page_size(Pf&& pf) noexcept {
	return pf.page_size;
}

template <is_platform Pf>
inline constexpr ::std::size_t get_smallest_allocation_size(Pf&& pf) noexcept {
	if constexpr (is_platform_has_smallest_allocation_size<Pf>) {
		return pf.smallest_allocation_size;
	} else {
		return pf.page_size;
	}
}

template <is_platform Pf>
inline constexpr ::std::size_t get_large_page_size(Pf&& pf) noexcept {
	if constexpr (is_platform_support_large_page<Pf>) {
		return pf.large_page_size;
	} else {
		return 0;
	}
}

template <is_platform Pf>
inline constexpr ::std::size_t get_huge_page_size(Pf&& pf) noexcept {
	if constexpr (is_platform_support_huge_page<Pf>) {
		return pf.huge_page_size;
	} else {
		return 0;
	}
}

template <is_platform Pf>
inline constexpr bool has_overcommit(Pf&& pf) noexcept {
	if constexpr (is_platform_has_overcommit<Pf>) {
		return pf.has_overcommit;
	} else {
		return false;
	}
}

template <is_platform Pf>
inline constexpr bool must_free_whole(Pf&& pf) noexcept {
	if constexpr (is_platform_has_must_free_whole<Pf>) {
		return pf.must_free_whole;
	} else {
		return true;
	}
}

template <is_platform Pf>
inline constexpr bool has_virtual_reserve(Pf&& pf) noexcept {
	if constexpr (is_platform_has_virtual_reserve<Pf>) {
		return pf.has_virtual_reserve;
	} else {
		return false;
	}
}

template <is_platform Pf>
inline constexpr auto platform_init(Pf&& pf) {
	if constexpr (is_platform_has_init<Pf>) {
		return pf.init();
	}
}
}