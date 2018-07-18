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
    PetrolCar opel(std::make_shared<PetrolEngine>(10,13,15));
    car = &opel;
    car->accelerate(50);
    car->changeGear(2);
    car->brake();
    car->refill();
std::cout << "adsdas" << std::endl;
    try {
        ElectricCar nissan(std::make_shared<ElectricEngine>(-120, -1800));
      //  ElectricCar nissan(pElecEng);
        car = &nissan;
        car->accelerate(80);
        car->brake();
        car->refill();
    }
    catch(const InvalidRange& ip) {
	std::cout << ip.what() << std::endl;
    }


    HybridCar toyota(std::make_shared<PetrolEngine>(80, 1400, 5), std::make_shared<ElectricEngine>(100, 540));
    car = &toyota;
    car->accelerate(100);
    car->brake();
    car->refill();

}
