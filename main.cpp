#include <iostream>
#include <SDL.h>
#include "./include/Screen.h"
#include <math.h>
#include <time.h>
#include "./include/Swarm.h"
using namespace std;
using namespace src;

int main() {


    srand(time(NULL));

    Screen screen;
    if(screen.init()==false){
        cout<<"Error initialization"<<endl;
    }

    Swarm swarm;

    while(true){

        int elapsed = SDL_GetTicks();


        swarm.update(elapsed);

        unsigned char green = (1+sin(elapsed*0.001))* 128;
        unsigned char red = (1+sin(elapsed*0.002))* 128;
        unsigned char blue = (1+sin(elapsed*0.003))* 128;

        const Particle *const pParticles = swarm.get_Particles();
        for(int i = 0 ; i< Swarm::NPARTICLE;i++){
            Particle particle = pParticles[i];
            int x = (particle.m_x +1) * Screen::SCREEN_WIDTH/2;
            int y = particle.m_y  * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x,y, red,green,blue);
        }


        screen.boxBlur();


        screen.update();

        if(!screen.processEvent()){
            break;
        }


    }

    screen.close();
    return 0;
}