#pragma once

#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"

class HybridCar : virtual public ElectricCar, virtual public PetrolCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();
private:
    PetrolEngine* petrolEngine_;
    ElectricEngine* electricEngine_;
};

