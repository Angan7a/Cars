#pragma once

#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine) : engine_(engine){}
    ~PetrolCar() {}
    void refuel() {}
private:
    PetrolEngine* engine_;
};

