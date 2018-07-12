#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"
#include "Car.hpp"
#include "InvalidPower.hpp"
#include <iostream>

int main()
{
    Car *car;
    PetrolCar opel(new PetrolEngine(120, 1800, 6));
    car = &opel;
    car->accelerate(50);
    car->changeGear(88888888);
    car->brake();
    car->refill();

    try {
    ElectricCar nissan(new ElectricEngine(-130, 650));
    car = &nissan;
    car->accelerate(80);
    car->brake();
    car->refill();
    }
    catch(const InvalidPower& ip) {
	std::cout << ip.what() << std::endl;
    }


    HybridCar toyota(new PetrolEngine(80, 1400, 5), new ElectricEngine(100, 540));
    car = &toyota;
    car->accelerate(100);
    car->brake();
    car->refill();
}
