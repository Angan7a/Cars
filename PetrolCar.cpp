#include "PetrolCar.hpp"
#include "InvalidGear.hpp"
#include <iostream>
#include <stdexcept>

PetrolCar::PetrolCar(PetrolEngine* engine) : engine_(engine) {} 

PetrolCar::~PetrolCar() {
	delete engine_;
}

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
	catch(std::invalid_argument &ig) {
        std::cerr << ig.what() << std::endl;		
	}
}	
