#include "Particle.h"

Particle::Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration, float shrink, int resolution, int alpha)
{
	this->x = x;
	this->y = y;
	this->xVelocity = xVelocity;
	this->yVelocity = yVelocity;
	this->xAcceleration = xAcceleration;
	this->yAcceleration = yAcceleration;
    this->shrink = shrink;
    this->resolution = resolution;
    this->alpha = alpha;
}

//--------------------------------------------------------------
void Particle::update() // updates position, speed, size, and fade
{
	x += xVelocity;
	y += yVelocity;
    
	xVelocity += xAcceleration;
	yVelocity += yAcceleration;
    
	if (size < 0)
		size = 0;
	else
        size -= shrink;
    
	if (alpha < 0)
		alpha = 0;
	else
		alpha -= 3;
}

//--------------------------------------------------------------
void Particle::draw()
{
	ofSetCircleResolution(resolution);
	ofDrawCircle(x, y, size);
}
