#include <fast_io.h>
#include <fast_io_device.h>

#include "../utils/io_device.h"

#include "../clpara/impl.h"
#include "../utils/version.h"

int main(int argc, char **argv) {
	auto &parse_res{::traject::parsing_result};
	
	int pr{::traject::parsing(argc, argv, parse_res, ::traject::hash_table)};

	if (pr != 0) {
		return 0;
	}

	::fast_io::io::print(::traject::u8out,
						 u8"\033[0m"
#ifdef __MSDOS__
						 u8"\033[35m"
#else
						 u8"\033[95m"
#endif
						 u8"Traject "
						 u8"\033[32m"
						 u8"V",
						 ::traject::traject_version,
						 u8"\033[0m\n"
	);

	return 0;
}

