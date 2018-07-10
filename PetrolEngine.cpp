#include "PetrolEngine.hpp"
#include <iostream>

PetrolEngine::PetrolEngine(int power, float capacity, int gears) : power_(power), capacity_(capacity), gears_(gears), currentGear_(0) {}

void PetrolEngine::changeGear(int gear) {
	std::cout << __FUNCTION__ << " to " << gear << std::endl; 
	currentGear_ = gear;
}
