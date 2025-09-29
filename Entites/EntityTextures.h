//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_ENTITYTEXTURES_H
#define CATALYSTENGINE_ENTITYTEXTURES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "raylib.h"

typedef struct PlayerTextures {
    Texture2D playerIdleTexture;
    Texture2D playerRunSideTexture;
    Texture2D playerRunUpTexture;
    Texture2D playerRunDownTexture;
    Texture2D playerCurrentTexture;
}PlayerTextures;


typedef struct EnemyTextures {
    Texture2D enemyIdleTexture;
    Texture2D enemyRunSideTexture;
}EnemyTextures;

#endif //CATALYSTENGINE_ENTITYTEXTURES_H