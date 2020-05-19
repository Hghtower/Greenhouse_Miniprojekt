#pragma once
#include <iostream>

class Greenhouse
{
private:
    float WaterLevel;
    float FertilizerLevel;
    bool light;

    

public:
    void SetNewWaterLevel() 
 {
    std::cout << "Fill with water (max 180 liters): " << std::endl;
    std::cin >> WaterLevel;
 };
    

    float getWater() 
    { 
        return WaterLevel;
        
    };
    float getFertilizerLevel() { return FertilizerLevel; };
};