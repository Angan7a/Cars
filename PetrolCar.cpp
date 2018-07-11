#include "PetrolCar.hpp"
#include "InvalidGear.hpp"
#include <iostream>

PetrolCar::PetrolCar(PetrolEngine* engine) : engine_(engine) {} 

PetrolCar::~PetrolCar() {}

void PetrolCar::refuel() {
    std::cout << __FUNCTION__ << std::endl;
}

void PetrolCar::refill() {
	refuel();
}

void PetrolCar::changeGear(int g) {
	try {
		engine_->changeGear(g);
	}
	catch(InvalidGear &ig) {
		ig.print();		
	}
}	
