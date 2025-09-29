//
// Created by Jason Evans on 29/09/2025.
//

#ifndef CATALYSTENGINE_KEYBOARDINPUT_H
#define CATALYSTENGINE_KEYBOARDINPUT_H

#include "raylib.h"

typedef enum {
    MOVE_NONE,
    MOVE_LEFT,
    MOVE_RIGHT,
    MOVE_UP,
    MOVE_DOWN
} MoveDirection;

MoveDirection GetMoveDirection(void);

#endif //CATALYSTENGINE_KEYBOARDINPUT_H