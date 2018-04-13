#include "ofApp.h"

#pragma once

class Particle
{
private:
    int resolution, alpha;
    float x, y, size = 10, shrink;
    float xVelocity{}, yVelocity{};
    float xAcceleration, yAcceleration;
    
public:
    Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration, float shrink, int resolution, int alpha);
    
    void update();
    void draw();
};
