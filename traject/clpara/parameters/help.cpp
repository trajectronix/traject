#include "help.h"
#include "../parameters.h"

::traject::cmdline::parameter_return_type(::traject::parameter::details::help_callback)(::std::size_t, ::fast_io::vector<::traject::cmdline::parameter_parsing_results>&) noexcept {
	::fast_io::u8native_io_observer buf_u8out{::traject::u8out};
	::fast_io::io::print(buf_u8out,
						 u8"\033[0m"
#ifdef __MSDOS__
						 u8"\033[37m"
#else
						 u8"\033[97m"
#endif
						 u8"Arguments:\n");
	for (auto& p : ::traject::parameters) {
		::fast_io::io::print(buf_u8out,
							 u8"\t"
							 u8"\033[32m",
							 ::fast_io::mnp::code_cvt(p->name));
		if (p->alias.len != 0) {
			::fast_io::io::print(buf_u8out,
#ifdef __MSDOS__
								 u8"\033[37m"
#else
								 u8"\033[97m"
#endif
								 u8", ");
			for (::std::size_t i{}; i < p->alias.len - 1; i++) {
				::fast_io::io::print(buf_u8out,
									 u8"\033[32m",
									 ::fast_io::mnp::code_cvt(p->alias.base[i]),
#ifdef __MSDOS__
									 u8"\033[37m"
#else
									 u8"\033[97m"
#endif
									 u8", ");
			}
			::fast_io::io::print(buf_u8out,
								 u8"\033[32m",
								 ::fast_io::mnp::code_cvt(p->alias.base[p->alias.len - 1]));
		}
		::fast_io::io::println(buf_u8out,
							   u8"\033[37m"
							   u8" --- "
#ifdef __MSDOS__
							   u8"\033[37m"
#else
							   u8"\033[97m"
#endif
							   , p->describe);
	}
	::fast_io::io::print(buf_u8out, u8"\033[0m");

	return ::traject::cmdline::parameter_return_type::return_soon;
}