#pragma once

#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"
#include <memory>

class HybridCar : public ElectricCar, public PetrolCar
{
public:
    HybridCar(std::shared_ptr<PetrolEngine> petrolEng, std::shared_ptr<ElectricEngine> electricEng);
    ~HybridCar();
    void refill();
private:
    std::shared_ptr<PetrolEngine> petrolEngine_;
    std::shared_ptr<ElectricEngine> electricEngine_;
};

