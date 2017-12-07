#pragma once
#include "ofMain.h"
#include "particle.hpp"

class particlesystem{
    
public:
    particlesystem(ofPoint, ofImage);
    void update();
    void display();
    void applyForce(ofPoint);
    void addParticle();
    
    ofPoint origin;
    ofImage img;
    vector<particle*> particles;
};
