#include "Particle.h"

Particle::Particle(float x, float y, float xVelocity, float yVelocity, float xAcceleration, float yAcceleration)
{
	this->x = x;
	this->y = y;
	this->xVelocity = xVelocity;
	this->yVelocity = yVelocity;
	this->xAcceleration = xAcceleration;
	this->yAcceleration = yAcceleration;
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
		size -= 0.1;
    
	if (alpha < 0)
		alpha = 0;
	else
		alpha -= 3;
}

//--------------------------------------------------------------
void Particle::draw()
{
	ofSetColor(255, 255, 0, alpha);
    
    // triangles
	ofSetCircleResolution(3);
	ofDrawCircle(x, y, size);
}
