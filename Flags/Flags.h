//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_FLAGS_H
#define CATALYSTENGINE_FLAGS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedFlags {
    bool isFacingLeft;
    bool isRunningSide;
    bool isAttacking;
}SharedFlags;

typedef struct PlayerFlags {
    bool isFacingDown;
    bool isFacingUp;
}PlayerFlags;

#ifdef __cplusplus
}
#endif
#endif //CATALYSTENGINE_FLAGS_H