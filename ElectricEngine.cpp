#include "ElectricEngine.hpp"
#include "InvalidPower.hpp"

ElectricEngine::ElectricEngine(int power, int batteryCapacity) : batteryCapacity_(batteryCapacity) {
	if(power <= 0) {
		throw InvalidPower();
	}
}

