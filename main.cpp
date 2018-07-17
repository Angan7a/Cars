#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"
#include "Car.hpp"
#include "InvalidPower.hpp"
#include <iostream>
#include <memory>

int main()
{
    Car *car;
    PetrolCar opel(std::make_shared<PetrolEngine>(10,13,15));
    car = &opel;
    car->accelerate(50);
    car->changeGear(88888888);
    car->brake();
    car->refill();

    try {
    std::shared_ptr<ElectricEngine> pElecEng = std::make_shared<ElectricEngine>(-120, -1800);
        ElectricCar nissan(pElecEng);
        car = &nissan;
        car->accelerate(80);
        car->brake();
        car->refill();
    }
    catch(const InvalidPower& ip) {
	std::cout << ip.what() << std::endl;
    }

/*
    HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));
    car = &toyota;
    car->accelerate(100);
    car->brake();
    car->refill();
*/
}
