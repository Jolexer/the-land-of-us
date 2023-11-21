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
    struct LAND_window* lWindow= LAND_init();
    SDL_Delay(10000);
    LAND_terminate(lWindow);
    return 0;
}
