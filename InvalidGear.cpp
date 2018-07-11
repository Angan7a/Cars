#include "InvalidGear.hpp"
#include<iostream>

InvalidGear::InvalidGear() : invalid_argument("Zakres biegu musi być w przedziale [1-5]") {}

void InvalidGear::print() {
	std::cout << "Bieg musi byc z zakresu [1-5]" << std::endl;
}

