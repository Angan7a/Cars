#pragma once

#include "PetrolEngine.hpp"
#include "Car.hpp"

class Petrol : public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void refuel();

    PetrolEngine* engine_;
};

