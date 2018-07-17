#include "ElectricEngine.hpp"
#include "InvalidPower.hpp"

ElectricEngine::ElectricEngine(int power, int batteryCapacity) : batteryCapacity_(batteryCapacity) {
	if((power <= 0) || (power > 500)) {
		throw InvalidPower("The power should be in the range [1-500]");
	}
	power_ = power;
}

