//
// Created by Jason Evans on 29/09/2025.
//

#ifndef CATALYSTENGINE_KEYBOARDINPUT_H
#define CATALYSTENGINE_KEYBOARDINPUT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "raylib.h"

typedef enum {
    MOVE_NONE,
    MOVE_LEFT,
    MOVE_RIGHT,
    MOVE_UP,
    MOVE_DOWN
} MoveDirection;

MoveDirection GetMoveDirection(void);

#ifdef __cplusplus
}
#endif

#endif //CATALYSTENGINE_KEYBOARDINPUT_H