#include "ElectricEngine.hpp"
#include "InvalidRange.hpp"

ElectricEngine::ElectricEngine(int power, int batteryCapacity) {
	if((power <= 0) || (power > 500)) {
		throw InvalidRange("The power should be in the range [1-500]");
	}
	power_ = power;
	if((batteryCapacity < 10) || (power > 100)) {
		throw InvalidRange("The battery capacity should be in the range [10-100]");
	}
	batteryCapacity_ = batteryCapacity;
       
}

