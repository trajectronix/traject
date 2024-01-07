#pragma once

#include <fast_io.h>

#include "../../../utils/cmdline/parameter.h"

namespace traject::parameter {
namespace details {
inline bool disin_is_exist{};
inline constexpr ::fast_io::basic_os_c_str_with_known_size<char> disin_alias{::fast_io::mnp::os_c_str_arr("-di")};
}  // namespace details

inline constexpr ::traject::cmdline::parameter disin{
	.name{::fast_io::mnp::os_c_str_arr("--disable-input")},
	.describe{::fast_io::mnp::os_c_str_arr(u8"Disable user command input.")},
	.alias{::traject::cmdline::kns_str_scatter_t{__builtin_addressof(details::disin_alias), 1}},
	.is_exist{__builtin_addressof(details::disin_is_exist)},
};
}  // namespace traject::parameter