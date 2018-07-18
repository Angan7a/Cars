#include "ElectricEngine.hpp"
#include "InvalidRange.hpp"

ElectricEngine::ElectricEngine(int power, int batteryCapacity) : batteryCapacity_(batteryCapacity) {
	if((power <= 0) || (power > 500)) {
		throw InvalidRange("The power should be in the range [1-500]");
	}
	power_ = power;
       
}

