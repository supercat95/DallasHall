#include "ofApp.h"
#include "Dallas Hall.hpp"

DallasHall::DallasHall()
{
    dome();
    building();
    roof();
    frieze();
    columns();
    stairs();
    windows();
//    overlay();
    trees();
}

void DallasHall::dome()
{
    ofSetColor(36, 12, 14);
    ofDrawRectangle(335, 170, 260, 70);
    
    ofSetCircleResolution(60);
    ofDrawCircle(465, 170, 130);
}

void DallasHall::building()
{
    ofSetColor(36, 20, 15);
    ofDrawRectangle(140, 260, 670, 180);
}

void DallasHall::roof()
{
    ofSetColor(36, 12, 14);
    ofDrawRectangle(140, 240, 670, 20);
}

void DallasHall::frieze() // left up right
{
    // black "stroke"
    ofSetColor(0);
    ofDrawTriangle(330, 238, 465, 165, 600, 238);
    ofSetColor(36, 12, 14);
    ofSetLineWidth(5);
    ofDrawLine(330, 240, 600, 240);
    
    // red triangle
    ofSetColor(208, 48, 55);
    ofDrawTriangle(332, 240, 465, 170, 598, 240);
    
    //beneath freize
    ofDrawRectangle(332, 242, 270, 20);
}

void DallasHall::columns()
{
    int x = 330, y = 265, rad = 5, lights = 5;
    
    for (int i = 0; i < 6; i++) // 6 columns
    {
        y = 265;
        for (int j = 0; j < 30; j++) // 30 rows
        {
            for (int k = 1; k < lights; k++) // # of lights per row
            {
                ofSetColor(ofRandom(240,260), ofRandom(230,260), ofRandom(200,250));
                ofDrawCircle(x + (k * rad), y, rad);
            }
            y = y + rad;
        }
        x = x + (rad * 2 * lights);
    }
}

void DallasHall::stairs()
{
    // white exterior
    ofSetColor(60, 40, 27);
    ofDrawRectangle(332, 440, 270, 45);
    
    // brown interior
    ofSetColor(45, 27, 21);
    ofDrawRectangle(347, 440, 240, 30);
    
    // red bases
    ofSetColor(208, 48, 55);
    int x = 330, y = 415, base = 25;
    for (int i = 0; i < 6; i ++)
    {
        ofDrawRectangle(x + (i * base), y, base, base);
        x = x + base;
    }
}

void DallasHall::windows()
{
    int x, xPosition, y = 265, w = 15 * 2, h = 25 * 2;
    
    for (int i = 0; i < 2; i++) // for left and right sides
    {
        if (i == 0) // right side
        {
            xPosition = 640;
        }
        if (i == 1) // left side
        {
            xPosition = 150;
        }
        y = 265;
        
        for (int j = 0; j < 3; j++) // rows
        {
            x = xPosition;
            for (int k = 0; k < 3; k++) // columns
            {
                //white frame
                ofSetColor(53, 35, 32);
                ofDrawRectangle(x + (k * w), y, w, h);
                
                //window
                ofSetColor(31, 15, 11);
                ofDrawRectangle(x + 2 + (k * w), y + 2, w - 4, h - 4);
                
                x = x + (w);
            }
            y = y + h + 10;
        }
    }
}

void DallasHall::overlay()
{
    // frieze- red triangle overlay
    ofSetColor(255, 0, 0, 220);
    ofDrawTriangle(332, 240, 465, 170, 598, 240);
    
    // freize- red rectangle overlay
    ofSetColor(255, 0, 0, 220);
    ofDrawRectangle(332, 242, 270, 20);
}

void DallasHall::trees()
{
    
}

