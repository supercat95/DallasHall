#pragma once

#include <vector>

using std::vector;

class Particle;

class WaterFountain
{
private:
    vector<Particle*> droplets;
    int alpha = 30;
    float x, y, shrink = .5;
    
public:
    WaterFountain();
    WaterFountain(float x, float y);
    
    ~WaterFountain();
    
    void base();
    
    void setup();
    
    void setX(float x);
    float getX();
    
    void setY(float y);
    float getY();
    
    void launch();
    void fall();
    
    void updateDroplets();
    void displayDroplets();
};
