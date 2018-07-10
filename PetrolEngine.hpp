#pragma once

class PetrolEngine
{
public:
    PetrolEngine(int power=10, float capacity=10, int gears=6) : power_(power), capacity_(capacity), gears_(gears), currentGear_(0) {}
    void changeGear(int gear) {}
private:
    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};

