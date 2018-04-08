#include "ofApp.h"

#pragma once

class Particle
{
private:
    float x, y, size = 10, alpha = 255;
    float xVelocity{}, yVelocity{};
    float xAcceleration, yAcceleration;
    
public:
    Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration);
    
    void update();
    void draw();
};
