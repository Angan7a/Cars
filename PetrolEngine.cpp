#include "PetrolEngine.hpp"
#include "InvalidGear.hpp"
#include <iostream>


PetrolEngine::PetrolEngine(int power, float capacity, int gears) : power_(power), capacity_(capacity), gears_(gears), currentGear_(0) {}

void PetrolEngine::changeGear(int gear) {
	if( gear > 6) { throw InvalidGear(); }
	std::cout << __FUNCTION__ << " to " << gear << std::endl; 
	currentGear_ = gear;
}
