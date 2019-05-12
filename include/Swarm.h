//
// Created by Alex Vakhno on 2019-04-28.
//

#ifndef PARTICLEEXPLOSION_SWARM_H
#define PARTICLEEXPLOSION_SWARM_H

#include "Particle.h"

namespace src {
    class Swarm {
    public:
        const static int NPARTICLE = 5000;
    private:
        Particle *  m_pParticle;
        int m_lastTime;
        int m_interval;
    public:
        Swarm();
        ~Swarm();
        const Particle *const get_Particles(){return m_pParticle;};
        void update(int elapsed);
    };
}

#endif //PARTICLEEXPLOSION_SWARM_H
