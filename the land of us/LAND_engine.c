//
//  LAND_engine.c
//  the land of us
//
//  Created by Jorik de boer on 21/11/2023.
//

#include "LAND_engine.h"
#include <SDL2/SDL.h>

int LAND_init(void) {
    SDL_Init( SDL_INIT_VIDEO );
    
    return 0;
}

void LAND_terminate(void) {
    SDL_Quit();
    return;
}
