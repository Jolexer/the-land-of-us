//
//  main.c
//  the land of us
//
//  Created by Jorik de boer on 21/11/2023.
//

//includes
#include <stdio.h>

#include <SDL2/SDL.h>

#include "LAND_defenitions.h"
#include "LAND_engine.h"

//code here
int main(void) {
    //test
    struct LAND_gamestate* lGamestate = malloc(sizeof(struct LAND_gamestate));
   lGamestate->window = LAND_init();
    if (lGamestate->window == NULL) {
        goto CLOSE;
    }
    //main loop i guess?
    SDL_Delay(10000);
CLOSE:
    LAND_terminate(lGamestate);
    return 0;
}
