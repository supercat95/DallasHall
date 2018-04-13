#include "ofApp.h"
#include "Dallas Hall.hpp"
#include "Water Fountain.hpp"

//--------------------------------------------------------------
ofApp::~ofApp()
{
    for (int i = 0; i < fireworks.size(); i++)
    {
        delete fireworks[i];
        fireworks[i] = nullptr;
    }

    for (int i = 0; i < waterDroplets.size(); i++)
    {
        delete waterDroplets[i];
        waterDroplets[i] = nullptr;
    }
    waterDroplets.clear();
}

//--------------------------------------------------------------
void ofApp::setup()
{
    ofBackground(3, 4, 6);
    
    for (int i = 0; i < 10; i++)
    {
        fireworks.push_back(new Firework(ofRandom(0, ofGetWidth()), ofRandom(ofGetHeight() - 100, ofGetHeight()), PI, ofRandom(PI/4, PI/6), 3));
        fireworks[i]->setup();

        waterDroplets.push_back(new WaterFountain(ofRandom(ofGetWidth()/2 - 30, ofGetWidth()/2 + 30), ofGetHeight() - 202));
        waterDroplets[i]->setup();
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    for (int i = 0; i < 10; i++)
    {
        if (fireworks[i]->getY() > 100)
        {
            fireworks[i]->launch();
        } else
        {
            fireworks[i]->updateParticles();
        }

//        waterDroplets.push_back(new WaterFountain(ofRandom(ofGetWidth()/2 - 30, ofGetWidth()/2 + 30), ofGetHeight() - 202));
//        waterDroplets[i]->setup();

        waterDroplets[i]->updateDroplets();
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    DallasHall();
    WaterFountain();

    for (int i = 0; i < 10; i++)
    {
        if (fireworks[i]->getY() > 100)
        {
            fireworks[i]->display();
        } else
        {
            fireworks[i]->displayParticles();
        }

        waterDroplets[i]->displayDroplets();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
