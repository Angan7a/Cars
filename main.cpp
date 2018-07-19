#include "PetrolCar.hpp"
#include "ElectricCar.hpp"
#include "HybridCar.hpp"
#include "Car.hpp"
#include "InvalidRange.hpp"
#include <iostream>
#include <memory>

int main()
{
    Car *car;
    try {
        PetrolCar opel(std::make_shared<PetrolEngine>(10,1300,5));
        car = &opel;
        car->accelerate(50);
        car->changeGear(2);
        car->brake();
        car->refill();
    }
    catch(const std::exception& ip) {
	std::cout << "Opel - " << ip.what() << std::endl;
    }
    try {
        ElectricCar nissan(std::make_shared<ElectricEngine>(-120, -1800));
        car = &nissan;
        car->accelerate(80);
        car->brake();
        car->refill();
    }
    catch(const std::exception& ip) {
	std::cout << "Nissan - " << ip.what() << std::endl;
    }

    try {
        HybridCar toyota(std::make_shared<PetrolEngine>(80, 140, 5), std::make_shared<ElectricEngine>(100, 80));
        car = &toyota;
        car->accelerate(100);
        car->brake();
        car->refill();
    }
    catch(const std::exception& ip) {
	std::cout << "Toyota - " << ip.what() << std::endl;
    }
}
