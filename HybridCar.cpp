#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(std::shared_ptr<PetrolEngine> petrolEng, std::shared_ptr<ElectricEngine> electricEng) : ElectricCar(electricEng), PetrolCar(petrolEng) {}

HybridCar::~HybridCar() {}

void HybridCar::refill() {
	PetrolCar::refill();
	ElectricCar::refill();
}
