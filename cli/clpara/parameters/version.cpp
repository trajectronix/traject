#include "version.h"
#include "../../utils/version.h"
#include "../../utils/io_device.h"

#ifdef TRAJECT_USE_MIMALLOC
#include "../../../memory/mimalloc/mimalloc.h"
#endif

::traject::cmdline::parameter_return_type(::traject::parameter::details::version_callback)(::std::size_t, ::fast_io::vector<::traject::cmdline::parameter_parsing_results>&) noexcept {
	::fast_io::io::println(::traject::u8out,
						   u8"\033[0m"
						   u8"Traject CLI"
						   u8"\nVersion: "
						   u8"\033[32m",
						   ::traject::traject_version,
						   u8"\033[0m"
						   // Git
						   u8"\n",
						   ::traject::git_fetch_head);

	return ::traject::cmdline::parameter_return_type::return_soon;
}