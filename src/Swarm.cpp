//
// Created by Alex Vakhno on 2019-04-28.
//

#include "../include/Swarm.h"

namespace src{
    Swarm::Swarm(): m_lastTime(0){
        m_pParticle = new Particle[NPARTICLE];

    }
    Swarm::~Swarm() {
        delete [] m_pParticle;
    }
    void Swarm::update(int elapsed) {
        m_interval = elapsed-m_lastTime;
        for(int i = 0 ; i< Swarm::NPARTICLE;i++){
            m_pParticle[i].update(m_interval);
        }
        m_lastTime = elapsed;
    }
}