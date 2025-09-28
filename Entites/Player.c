//
// Created by Jason Evans on 28/09/2025.
//

#include "Player.h"

void InitPlayer(Player* player) {
    player->playerStartingPosX = 250.0f;
    player->playerStartingPosY = 250.0f;
    player->PlayerSpeed = 200.0f;
    player->srcRect = (Rectangle){ 0, 0, 64, 64};
    player->destRect = (Rectangle){player->playerStartingPosX, player->playerStartingPosY, 64, 64};
    player->origin = (Vector2){ 0.0f, 0.0f };
    player->playerTextures.playerIdleTexture = LoadTexture("Assets/Player/Animations/Idle_Base/Idle-Side-Sheet.png");
}

void DrawPlayer(Player* player) {
    DrawTexturePro(player->playerTextures.playerIdleTexture,player->srcRect,player->destRect,player->origin,0.0f,WHITE);
}

void UpdatePlayer(Player *player, float deltaTime) {

    if (IsKeyDown(KEY_W)) {
        player->destRect.y -= player->PlayerSpeed * deltaTime;
    }
}
