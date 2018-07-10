#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng) : ElectricCar(electricEng), PetrolCar(petrolEng) {}

HybridCar::~HybridCar() {}


