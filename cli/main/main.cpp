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

	return 0;
}

