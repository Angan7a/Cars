#include "PetrolCar.hpp"
#include "InvalidGears.hpp"
#include <iostream>
#include <stdexcept>

PetrolCar::PetrolCar(std::shared_ptr<PetrolEngine> engine) : engine_(engine) {} 

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
	catch(const std::invalid_argument &ig) {
		std::cerr << ig.what() << std::endl;		
	}
}	
