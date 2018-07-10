#pragma once

#include "PetrolEngine.hpp"
#incldue "Car.hpp"

class ElectricCar
{
public:
    ElectricCar(PetrolEngine* engine);
    ~ElectricCar();
    void charge();

    PetrolEngine* engine_;
};

