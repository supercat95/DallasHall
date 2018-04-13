#include "Water Fountain.hpp"
#include "Particle.h"

WaterFountain::WaterFountain()
{
    base();
}

WaterFountain::WaterFountain(float x, float y)
{
    this->x = x;
    this->y = y;
}

WaterFountain::~WaterFountain()
{
    for (int i = 0; i < droplets.size(); i++)
    {
        delete droplets[i];
        droplets[i] = nullptr;
    }
    droplets.clear();
}

//--------------------------------------------------------------
void WaterFountain::base()
{
    ofSetColor(144, 144, 144);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight() - 200, 300, 30);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight() - 205, 260, 26);
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight() - 202, 220, 22);
}

//--------------------------------------------------------------
void WaterFountain::setup()
{
    for (int i = 0; i < 100; i++)
    {
        droplets.push_back(new Particle(x, ofRandom(ofGetHeight() - 202, ofGetHeight() - 300), ofRandom(-.1, .1), ofRandom(-6, -4), 0, .1, .1, 60, alpha));
    }
}

//--------------------------------------------------------------
void WaterFountain::setY(float y)
{
    this->y = y;
}

float WaterFountain:: getY()
{
    return y;
}
//--------------------------------------------------------------
void WaterFountain::setX(float x)
{
    this-> x = x;
}

float WaterFountain:: getX()
{
    return x;
}

//--------------------------------------------------------------
void WaterFountain::updateDroplets()
{
    for (int i = 0; i < droplets.size(); i++)
    {
        y += .5;
        droplets[i]->update();
    }
}

//--------------------------------------------------------------
void WaterFountain::displayDroplets()
{
    for (int i = 0; i < droplets.size(); i++)
    {
        ofSetColor(14, 56, 121, alpha);
        droplets[i]->draw();
    }
}
