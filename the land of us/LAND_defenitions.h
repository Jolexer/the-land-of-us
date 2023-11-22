//
//  LAND_defenitions.h
//  the land of us
//
//  Created by Jorik de boer on 21/11/2023.
//

#ifndef LAND_defenitions_h
#define LAND_defenitions_h

#include <SDL2/SDL.h>
#include <stdbool.h>

struct LAND_window {
    SDL_Window* window;
    SDL_Surface* surface;
};

struct LAND_gamestate {
    struct LAND_window* window;
    bool quit;
};

#endif /* LAND_defenitions_h */
