#pragma once

#include <fast_io.h>
#include <fast_io_device.h>
#include "../utils/io_device.h"

inline constexpr void run() noexcept {
	::fast_io::io::print(::traject::u8out,
						 u8"\033[0m"
#ifdef __MSDOS__
						 u8"\033[37m"
#else
						 u8"\033[97m"
#endif
						 u8"traject: "
						 u8"\033[0m"
						 u8"Start the CLI\n");
	::fast_io::win32_process_io tjcli{};
	::fast_io::native_process cli{u8"tjcli.exe", tjcli};

}