//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_PLAYER_H
#define CATALYSTENGINE_PLAYER_H

#include "../Entites/EntityTextures.h"
#include "../Entites/Flags/Flags.h"
typedef struct Player {
    float playerStartingPosX;
    float playerStartingPosY;
    float playerSpeed;
    Rectangle destRect;
    Rectangle srcRect;
    Vector2 origin;

    // External structs
    PlayerTextures playerTextures;
    SharedFlags sharedFlags;
    PlayerFlags playerFlags;
}Player;

void InitPlayer(Player* player);
void DrawPlayer(Player* player);
void UpdatePlayer(Player* player, float deltaTime);
void RenderPlayer(Player* player);

#endif //CATALYSTENGINE_PLAYER_H