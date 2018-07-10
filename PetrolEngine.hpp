#pragma once

class PetrolEngine
{
public:
    PetrolEngine(int power=10, float capacity=10, int gears=6);
    void changeGear(int gear);
private:
    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};

