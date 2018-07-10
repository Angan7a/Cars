#pragma once

#include "PetrolEngine.hpp"

class ElectricCar
{
public:
    ElectricCar(PetrolEngine* engine);
    ~ElectricCar();
    void turnLeft();
    void turnRight();
    void brake();
    void accelerate(int speed);
    void charge();

    PetrolEngine* engine_;
};

