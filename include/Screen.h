//
// Created by Alex Vakhno on 2019-04-28.
//

#ifndef PARTICLEEXPLOSION_SCREEN_H
#define PARTICLEEXPLOSION_SCREEN_H

#include <SDL.h>

namespace src{
    class Screen {
    public:
        const static int SCREEN_WIDTH =800;
        const static int SCREEN_HEIGHT = 600;

    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer1;
        Uint32 *m_buffer2;


    public:
        Screen();
        bool init();
        bool processEvent();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        void update();
        void boxBlur();
        void close();
    };

}
#endif //PARTICLEEXPLOSION_SCREEN_H
