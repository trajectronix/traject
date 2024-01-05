#include "init.h"

::traject::cmdline::parameter_return_type(::traject::parameter::details::init_callback)(::std::size_t, ::fast_io::vector<::traject::cmdline::parameter_parsing_results>&) noexcept {

	return ::traject::cmdline::parameter_return_type::return_soon;
}