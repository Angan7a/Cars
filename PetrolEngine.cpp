#include "PetrolEngine.hpp"
#include "InvalidGear.hpp"
#include "InvalidRange.hpp"
#include <iostream>


PetrolEngine::PetrolEngine(int power, float capacity, int gears) : currentGear_(0) {
	if((power <=0) || (power>500)) {
		throw InvalidRange("Power should be in the range [1-500]");
	}
	power_ = power;
 	if((gears <=0) || (gears > 5)) {
		throw InvalidRange("Gears should be [1, 2, 3, 4, 5]");
	}
	gears_ = gears;
 	if((capacity <=500) || (capacity > 2000)) {
		throw InvalidRange("Capacity should be in the range [500-2000]");
	}
	capacity_ = capacity;
}

void PetrolEngine::changeGear(int gear) {
        if(gear <= -2 || gear > gears_) {
		throw InvalidGear("Invalid gear!!!");
        }
	std::cout << __FUNCTION__ << " to " << gear << std::endl; 
	currentGear_ = gear;
}
