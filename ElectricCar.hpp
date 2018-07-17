#pragma once

#include "ElectricEngine.hpp"
#include "Car.hpp"
#include <memory>

class ElectricCar : virtual public Car
{
public:
    ElectricCar(std::shared_ptr<ElectricEngine> engine);
    ~ElectricCar();
    void refill();
private:
    void charge();
    std::shared_ptr<ElectricEngine> engine_;
};

