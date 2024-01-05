#pragma once

#include <cstdint>
#include <cstddef>
#include <type_traits>
#include <concepts>

namespace tjmalloc {

inline constexpr ::std::size_t KiloBytes{1024};
inline constexpr ::std::size_t MegaBytes{1024 * KiloBytes};
inline constexpr ::std::size_t GigaBytes{1024 * MegaBytes};

}