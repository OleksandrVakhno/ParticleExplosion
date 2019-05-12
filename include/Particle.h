//
// Created by Alex Vakhno on 2019-04-28.
//

#ifndef PARTICLEEXPLOSION_PARTICLE_H
#define PARTICLEEXPLOSION_PARTICLE_H

#include <stdlib.h>
#include <math.h>


namespace src {
    struct Particle {
        double m_x;
        double m_y;
        Particle();
        void update(int interval);

    private:
        double m_speed;
        double m_direction;
        void init();


    };
}

#endif //PARTICLEEXPLOSION_PARTICLE_H
