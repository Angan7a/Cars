#include "PetrolEngine.hpp"
#include "InvalidGears.hpp"
#include "InvalidPower.hpp"
#include <iostream>


PetrolEngine::PetrolEngine(int power, float capacity, int gears) : capacity_(capacity), gears_(gears), currentGear_(0) {
	if((power <=0) || (power>500)) {
		throw InvalidPower("Power should be in the range [1-500]");
	}
	power_ = power;
} 

void PetrolEngine::changeGear(int gear) {
	std::cout << __FUNCTION__ << " to " << gear << std::endl; 
	currentGear_ = gear;
}
