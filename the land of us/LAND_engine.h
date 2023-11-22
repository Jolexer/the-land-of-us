//
//  LAND_engine.h
//  the land of us
//
//  Created by Jorik de boer on 21/11/2023.
//

#ifndef LAND_engine_h
#define LAND_engine_h

#include <stdio.h>
#include "LAND_defenitions.h"

struct LAND_window* LAND_init(void);

int LAND_terminate(struct LAND_gamestate*);


#endif /* LAND_engine_h */
