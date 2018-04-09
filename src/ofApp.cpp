#include "ofApp.h"
#include "Dallas Hall.hpp"

//--------------------------------------------------------------

ofApp::~ofApp()
{
    for (int i = 0; i < fireworks.size(); i++)
    {
        delete fireworks[i];
        fireworks[i] = nullptr;
    }
    fireworks.clear();
}

void ofApp::setup()
{
    ofBackground(3, 4, 6);
    
    for (int i = 0; i < 10; i++) {
        fireworks.push_back(new Firework(ofRandom(0, ofGetWidth()), ofRandom(ofGetHeight() - 100, ofGetHeight()), PI, ofRandom(PI/4, PI/6), 3));
        fireworks[i]->setup();
    }
}

//--------------------------------------------------------------
void ofApp::update()
{
    for (int i = 0; i < 10; i++) {
        if (fireworks[i]->getY() > 100) {
            fireworks[i]->launch();
        } else
        {
            fireworks[i]->updateParticles();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    DallasHall();
    
    for (int i = 0; i < 10; i++)
    {
        if (fireworks[i]->getY() > 100)
        {
            fireworks[i]->display();
        } else
        {
            fireworks[i]->displayParticles();
        }
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
