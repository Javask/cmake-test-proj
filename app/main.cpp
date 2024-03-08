#include <modm/platform.hpp>

int
main()
{
	modm::platform::Adc1::initialize();
	return 0;
}