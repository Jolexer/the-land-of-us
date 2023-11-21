//
//  LAND_engine.c
//  the land of us
//
//  Created by Jorik de boer on 21/11/2023.
//

#include "LAND_engine.h"
#include <SDL2/SDL.h>
#include <stdlib.h>

struct LAND_window* LAND_init(void) {
    SDL_Init( SDL_INIT_VIDEO );
    struct LAND_window* lWindow = malloc(sizeof(struct LAND_window));
    lWindow->window = SDL_CreateWindow("The land of Us.", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);
    if (lWindow->window == NULL) {
        printf("createWindow error: %s\n", SDL_GetError());
        exit(-1);
    }
    return lWindow;
}

int LAND_terminate(struct LAND_window* lWindow) {
    free(lWindow);
    SDL_Quit();
    return 0;
}
