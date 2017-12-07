#include "particlesystem.hpp"

particlesystem::particlesystem(ofPoint location, ofImage img_) {
    origin = location;
    img= img_;
}

void particlesystem::addParticle(){
    particles.push_back(new particle(origin, img));
}

void particlesystem::update(){
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->update();
        if(particles.at(i)->isDead()){
            particles.erase(particles.begin() + i);
        }
    }
}

void particlesystem::display(){
    for (auto &p : particles){
        p->display();
    }
}

void particlesystem::applyForce(ofPoint f) {
    for (auto &p : particles) {
        p->applyForce(f);
    }
}
