//
// Created by Jason Evans on 29/09/2025.
//

#include "KeyboardInput.h"

MoveDirection GetMoveDirection(void) {
    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {return MOVE_LEFT;}
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {return MOVE_RIGHT;}
    if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {return MOVE_UP;}
    if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {return MOVE_DOWN;}
    return MOVE_NONE;
}
