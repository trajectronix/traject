#pragma once

#include <utility>

#include <fast_io.h>
#include "../../utils/cmdline/impl.h"
#include "../utils/io_device.h"

namespace traject {
inline ::fast_io::vector<::traject::cmdline::parameter_parsing_results> parsing_result{};

template <::std::size_t hash_table_size, ::std::size_t conflict_size>
#if __has_cpp_attribute(__gnu__::__cold__)
[[__gnu__::__cold__]]
#endif
inline constexpr int parsing(
	int argc,
	char **argv,
	::fast_io::vector<::traject::cmdline::parameter_parsing_results> &pr,
	::traject::cmdline::parameters_hash_table<hash_table_size, conflict_size> const &ht) noexcept {

	if (argc == 0) {
		::fast_io::io::perrln(::traject::u8err,
							  u8"\033[0m"
#ifdef __MSDOS__
							  u8"\033[37m"
#else
							  u8"\033[97m"
#endif
							  u8"traject: "
							  u8"\033[31m"
							  u8"[error] "
							  u8"\033[0m"
#ifdef __MSDOS__
							  u8"\033[37m"
#else
							  u8"\033[97m"
#endif
							  u8"No Parameters."
							  u8"\033[0m");
		return -1;
	}

	pr.reserve(static_cast<::std::size_t>(argc));

	if (*argv != nullptr) {
		pr.emplace_back_unchecked(::fast_io::mnp::os_c_str(*argv, ::fast_io::cstr_len(*argv)), nullptr, ::traject::cmdline::parameter_parsing_results_type::dir);
	}
#if 0
	if (argc > 1) {
		if (argv[1] != nullptr) {
			auto argv_str{::fast_io::mnp::os_c_str(argv[1], ::fast_io::cstr_len(argv[1]))};

			if (argv_str.n != 0) {
				if (argv_str.ptr[0] == '-') {
					auto para{::traject::cmdline::find_from_hash_table<hash_table_size, conflict_size>(ht, argv_str)};
					if (para == nullptr) {
						pr.emplace_back_unchecked(argv_str, nullptr, ::traject::cmdline::parameter_parsing_results_type::invalid_parameter);
					} else {
						if (para->is_exist)
							*para->is_exist = true;
						pr.emplace_back_unchecked(argv_str, para, ::traject::cmdline::parameter_parsing_results_type::parameter);
					}
				} else {
					pr.emplace_back_unchecked(argv_str, nullptr, ::traject::cmdline::parameter_parsing_results_type::arg);
				}
			}
		}
	}
#endif
	for (int i{1}; i < argc; i++) {
		if (argv[i] == nullptr)
			continue;

		auto argv_str{::fast_io::mnp::os_c_str(argv[i], ::fast_io::cstr_len(argv[i]))};

		if (argv_str.n == 0)
			continue;

		if (argv_str.ptr[0] == '-') {
			auto para{::traject::cmdline::find_from_hash_table<hash_table_size, conflict_size>(ht, argv_str)};
			if (para == nullptr) {
				pr.emplace_back_unchecked(argv_str, nullptr, ::traject::cmdline::parameter_parsing_results_type::invalid_parameter);
			} else {
				if (para->is_exist ? *para->is_exist : false) {
					pr.emplace_back_unchecked(argv_str, nullptr, ::traject::cmdline::parameter_parsing_results_type::duplicate_parameter);
				} else {
					if (para->is_exist)
						*para->is_exist = true;
					pr.emplace_back_unchecked(argv_str, para, ::traject::cmdline::parameter_parsing_results_type::parameter);
				}
			}
		} else {
			pr.emplace_back_unchecked(argv_str, nullptr, ::traject::cmdline::parameter_parsing_results_type::arg);
		}
	}

	{
		::fast_io::u8native_io_observer buf_u8err{::traject::u8err};
#if 0
		constexpr auto ign_invpm{__builtin_addressof(::traject::parameter::ignore_invalid_parameters)};

		bool const ign_invpm_b{ign_invpm->is_exist ? *ign_invpm->is_exist : false};
#else
		bool const ign_invpm_b{false};
#endif
		bool shouldreturn{};

		for (auto &i : pr) {
			if (i.type == ::traject::cmdline::parameter_parsing_results_type::invalid_parameter) {
				if (ign_invpm_b) {
					::fast_io::io::perr(buf_u8err,
										u8"\033[0m"
#ifdef __MSDOS__
										u8"\033[37m"
#else
										u8"\033[97m"
#endif
										u8"traject: "
										u8"\033[91m",
										u8"[warning] "
#ifdef __MSDOS__
										u8"\033[37m"
#else
										u8"\033[97m"
#endif
										u8"ignore ");
				} else {
					shouldreturn = true;
					::fast_io::io::perr(buf_u8err,
										u8"\033[0m",
#ifdef __MSDOS__
										u8"\033[37m"
#else
										u8"\033[97m"
#endif
										u8"traject: "
										u8"\033[31m"
										u8"[error] "
#ifdef __MSDOS__
										u8"\033[37m"
#else
										u8"\033[97m"
#endif
					);
				}

				::fast_io::io::perr(buf_u8err,
									u8"invalid parameter: "
									u8"\033[36m",
									::fast_io::mnp::code_cvt(i.str));

				if (ign_invpm_b) {
					::fast_io::io::perrln(buf_u8err, u8"\033[0m");
				} else {
					::fast_io::basic_os_c_str_with_known_size<char> f_test_str{};

					::std::size_t const str_size{i.str.size()};
#if __has_cpp_attribute(assume)
					::std::size_t constexpr smax{::std::numeric_limits<::std::size_t>::max() / 4u};
					[[assume(str_size <= smax)]];
#endif
					::std::size_t const test_size{str_size * 4u / 10u};
					::std::size_t f_test_size{test_size};

					for (auto &j : ::traject::parameter_lookup_table) {
						if (j.str.size() < str_size - f_test_size || j.str.size() > str_size + f_test_size)
							continue;
						if (auto const dp_res{::traject::cmdline::dp<parameter_max_name_size + parameter_max_name_size * 4u / 10u + 1u>(i.str, j.str)}; dp_res <= test_size) {
							f_test_str = j.str;
							f_test_size = dp_res;
						}
					}

					if (f_test_str.n == 0) {
						::fast_io::io::perrln(buf_u8err, u8"\033[0m");
					} else {
						::fast_io::io::perrln(buf_u8err,
#ifdef __MSDOS__
											  u8"\033[37m"
#else
											  u8"\033[97m"
#endif
											  u8" (did you mean: "
											  u8"\033[32m",
											  ::fast_io::mnp::code_cvt(f_test_str),
#ifdef __MSDOS__
											  u8"\033[37m"
#else
											  u8"\033[97m"
#endif
											  u8")"
											  u8"\033[0m");
					}
				}
			} else if (i.type == ::traject::cmdline::parameter_parsing_results_type::duplicate_parameter) {
				if (ign_invpm_b) {
					::fast_io::io::perrln(buf_u8err,
										  u8"\033[0m",
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"traject: "
#ifdef __MSDOS__
										  u8"\033[31m"
#else
										  u8"\033[91m"
#endif
										  u8"[warning] "
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"ignore duplicate parameter: "
										  u8"\033[36m",
										  ::fast_io::mnp::code_cvt(i.str),
										  u8"\033[0m");
				} else {
					shouldreturn = true;
					::fast_io::io::perrln(buf_u8err,
										  u8"\033[0m"
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"traject: "
										  u8"\033[31m"
										  u8"[error] "
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"duplicate parameter: "
										  u8"\033[36m",
										  ::fast_io::mnp::code_cvt(i.str),
										  u8"\033[0m");
				}
			} else if (i.type == ::traject::cmdline::parameter_parsing_results_type::arg) {
				if (ign_invpm_b) {
					::fast_io::io::perrln(buf_u8err,
										  u8"\033[0m"
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"traject: "
#ifdef __MSDOS__
										  u8"\033[31m"
#else
										  u8"\033[91m"
#endif
										  u8"[warning] "
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"ignore invalid option: "
										  u8"\033[36m",
										  ::fast_io::mnp::code_cvt(i.str),
										  u8"\033[0m");
				} else {
					shouldreturn = true;
					::fast_io::io::perrln(buf_u8err,
										  u8"\033[0m"
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"traject: "
										  u8"\033[31m",
										  u8"[error] "
#ifdef __MSDOS__
										  u8"\033[37m"
#else
										  u8"\033[97m"
#endif
										  u8"invalid option: "
										  u8"\033[36m",
										  ::fast_io::mnp::code_cvt(i.str),
										  u8"\033[0m");
				}
			}
		}

		if (shouldreturn) {
			return -1;
		}
	}

	bool needexit{};
	bool needterminal{};
	for (::size_t i{1}; i < pr.size(); i++) {
		if (pr[i].para == nullptr)
			continue;

		if (auto const cb{pr[i].para->callback}; cb != nullptr) {
			::traject::cmdline::parameter_return_type const res{cb(i, pr)};
			switch (res) {
			case ::traject::cmdline::parameter_return_type::def:
				break;
			case ::traject::cmdline::parameter_return_type::return_imme:
				return -1;
			case ::traject::cmdline::parameter_return_type::return_soon:
				needexit = true;
				break;
			case ::traject::cmdline::parameter_return_type::err_imme:
				::fast_io::fast_terminate();
				::std::unreachable();
			case ::traject::cmdline::parameter_return_type::err_soon:
				needterminal = true;
				break;
			default:
				::std::unreachable();
			}
		}
	}
	
	if (needterminal) 
		::fast_io::fast_terminate();

	if (needexit)
		return -1;

	return 0;
}
} // namespace traject