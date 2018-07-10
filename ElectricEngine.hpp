#pragma once

class ElectricEngine
{
public:
    ElectricEngine(int power=10, int batteryCapacity=10) : power_(power), batteryCapacity_(batteryCapacity) {}

    int power_;             // in HP 
    int batteryCapacity_;   // in Ah
};

