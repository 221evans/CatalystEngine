//
// Created by Jason Evans on 02/10/2025.
//

#ifndef CATALYSTENGINE_ANIMATION_H
#define CATALYSTENGINE_ANIMATION_H

#ifdef __cplusplus
extern "C" {
#endif
#include "raylib.h"

    typedef struct AnimationData
    {
        int totalFrames;
        float frameDelay;
        float frameCounter;
        int frameIndex;
        int frameWidth;
    } AnimationData;

    void Animate(AnimationData* animData, float deltaTime, Rectangle* srcRec);



#ifdef __cplusplus
}
#endif
#endif //CATALYSTENGINE_ANIMATION_H