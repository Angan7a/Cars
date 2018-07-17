#pragma once

#include "PetrolEngine.hpp"
#include "Car.hpp"
#include <memory>

class PetrolCar : virtual public Car
{
public:
    PetrolCar(std::shared_ptr<PetrolEngine> engine);
    ~PetrolCar();
    void changeGear(int g);
    void refill();
private:
    void refuel();
    std::shared_ptr<PetrolEngine> engine_;
};

