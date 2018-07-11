#pragma once

#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar : virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void changeGear(int g);
    void refill();
private:
    void refuel();
    PetrolEngine* engine_;
};

