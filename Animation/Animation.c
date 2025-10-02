//
// Created by Jason Evans on 02/10/2025.
//

#include "Animation.h"

void Animate(AnimationData* animData, const float deltaTime, Rectangle* srcRec )
{
    animData->frameCounter += deltaTime;
    if (animData->frameCounter >= animData->frameDelay)
    {
        animData->frameCounter -= animData->frameDelay;
        animData->frameIndex = (animData->frameIndex + 1) % animData->totalFrames;
        srcRec->x = (float)animData->frameWidth * (float)animData->frameIndex;
    }
}