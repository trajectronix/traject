#include <fast_io/fast_io.h>
#include <tjmalloc/platform.h>

struct A {
	inline static constexpr ::std::size_t page_size{};
};

int main() {
	constexpr auto i = tjmalloc::is_platform<A>;
}