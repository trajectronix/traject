#pragma once

#include <fast_io.h>

#include "../../../utils/cmdline/parameter.h"

namespace traject::parameter {
namespace details {
inline bool disout_is_exist{};
inline constexpr ::fast_io::basic_os_c_str_with_known_size<char> disout_alias{::fast_io::mnp::os_c_str_arr("-do")};
}  // namespace details

inline constexpr ::traject::cmdline::parameter disout{
	.name{::fast_io::mnp::os_c_str_arr("--disable-output")},
	.describe{::fast_io::mnp::os_c_str_arr(u8"Disable CLI log output.")},
	.alias{::traject::cmdline::kns_str_scatter_t{__builtin_addressof(details::disout_alias), 1}},
	.is_exist{__builtin_addressof(details::disout_is_exist)},
};
}  // namespace traject::parameter