#include "InvalidGear.hpp"
#include<iostream>

InvalidGear::InvalidGear() {}

void InvalidGear::print() {
	std::cerr << "Bieg musi byc z zakresu [1-5]" << std::endl;
}

