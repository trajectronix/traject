#pragma once

#include <fast_io.h>
#include <fast_io_freestanding.h>


#include "../../../utils/cmdline/parameter.h"

namespace traject::parameter {
namespace details {
inline bool help_is_exist{};
inline constexpr ::fast_io::freestanding::array<::fast_io::basic_os_c_str_with_known_size<char>, 2> help_alias{
	::fast_io::mnp::os_c_str_arr("-h"),
	::fast_io::mnp::os_c_str_arr("-?")
};
extern ::traject::cmdline::parameter_return_type help_callback(::std::size_t, ::fast_io::vector<::traject::cmdline::parameter_parsing_results>&) noexcept;
}  // namespace details

inline constexpr ::traject::cmdline::parameter help{
	.name{::fast_io::mnp::os_c_str_arr("--help")},
	.describe{::fast_io::mnp::os_c_str_arr(u8"Get help information.")},
	.alias{::traject::cmdline::kns_str_scatter_t{details::help_alias.data(), details::help_alias.size()}},
	.callback{__builtin_addressof(details::help_callback)},
	.is_exist{__builtin_addressof(details::help_is_exist)},
};
}  // namespace traject::parameter