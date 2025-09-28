//
// Created by Jason Evans on 28/09/2025.
//

#ifndef CATALYSTENGINE_PLAYER_H
#define CATALYSTENGINE_PLAYER_H

#include "../Entites/EntityTextures.h"

typedef struct Player {
    float playerStartingPosX;
    float playerStartingPosY;
    float PlayerSpeed;
    Rectangle destRect;
    Rectangle srcRect;
    Vector2 origin;
    PlayerTextures playerTextures;
}Player;




void InitPlayer(Player* player);
void DrawPlayer(Player* player);
void UpdatePlayer(Player* player, float deltaTime);

#endif //CATALYSTENGINE_PLAYER_H