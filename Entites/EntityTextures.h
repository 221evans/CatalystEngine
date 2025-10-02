//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_ENTITYTEXTURES_H
#define CATALYSTENGINE_ENTITYTEXTURES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "raylib.h"

typedef struct EntityTextures {
    Texture2D idleTexture;
    Texture2D runSideTexture;
    Texture2D runUpTexture;
    Texture2D runDownTexture;
    Texture2D attackTexture;
    Texture2D currentTexture;

}EntityTextures;

#ifdef __cplusplus
}
#endif

#endif //CATALYSTENGINE_ENTITYTEXTURES_H

