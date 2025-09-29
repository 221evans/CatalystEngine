//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_FLAGS_H
#define CATALYSTENGINE_FLAGS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Flags {
    bool isFacingLeft;
    bool isRunningSide;
    bool isAttacking;
    bool isMoving;
    bool isJumping;
    bool isDead;
    bool isHit;

}Flags;


#ifdef __cplusplus
}
#endif
#endif //CATALYSTENGINE_FLAGS_H