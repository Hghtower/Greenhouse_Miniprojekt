#pragma once
#include <iostream>

class Greenhouse
{
private:
    float WaterLevel;
    float FertilizerLevel;
    bool light;

    

public:
    float SetNewWaterLevel();
    };

    float getWater() { return WaterLevel; };
    float getFertilizerLevel() { return FertilizerLevel; };
};




void Greenhouse :: SetNewWaterLevel(float refil) {
    
    std::cin >> WaterLevel;
}