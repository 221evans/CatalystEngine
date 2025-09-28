//
// Created by Jason Evans on 28/09/2025.
//

#include "Player.h"

void InitPlayer(Player* player) {
    player->playerStartingPosX = 250.0f;
    player->playerStartingPosY = 250.0f;
    player->playerSpeed = 200.0f;
    player->srcRect = (Rectangle){ 0, 0, 64, 64};
    player->destRect = (Rectangle){player->playerStartingPosX, player->playerStartingPosY, 64, 64};
    player->origin = (Vector2){ 0.0f, 0.0f };

    // Texture Loading
    player->playerTextures.playerIdleTexture = LoadTexture("Assets/Player/Animations/Idle_Base/Idle-Side-Sheet.png");
    player->playerTextures.playerRunSideTexture = LoadTexture("Assets/Player/Animations/Run_Base/Run-Side-Sheet.png");
    player->playerTextures.playerRunUpTexture = LoadTexture("Assets/Player/Animations/Run_base/Run-Up-Sheet.png");
    player->playerTextures.playerRunDownTexture = LoadTexture("Assets/Player/Animations/Run_Base/Run-Down-Sheet.png");
    player->playerTextures.playerCurrentTexture = player->playerTextures.playerIdleTexture;
}

void DrawPlayer(Player* player) {
    DrawTexturePro(player->playerTextures.playerCurrentTexture,player->srcRect,player->destRect,player->origin,0.0f,WHITE);
}

void UpdatePlayer(Player *player, float deltaTime) {


    if (IsKeyDown(KEY_W)) {
        player->destRect.y -= player->playerSpeed * deltaTime;
        player->sharedFlags.isFacingLeft = false;
        player->playerFlags.isFacingUp = true;
        player->playerFlags.isFacingDown = false;
    }
    if (IsKeyDown(KEY_S)) {
        player->destRect.y += player->playerSpeed * deltaTime;
        player->sharedFlags.isFacingLeft = false;
        player->playerFlags.isFacingUp = false;
        player->playerFlags.isFacingDown = true;
    }
    if (IsKeyDown(KEY_A)) {
        player->destRect.x -= player->playerSpeed * deltaTime;
        player->sharedFlags.isFacingLeft = true;
        player->playerFlags.isFacingUp = false;
        player->playerFlags.isFacingDown = false;
    }
    if (IsKeyDown(KEY_D)) {
        player->destRect.x += player->playerSpeed * deltaTime;
        player->sharedFlags.isFacingLeft = false;
        player->playerFlags.isFacingUp = false;
        player->playerFlags.isFacingDown = false;
    }

    RenderPlayer(player);
}

void RenderPlayer(Player *player) {
    if (player->sharedFlags.isFacingLeft) {
        player->srcRect.width = -64;
    }
    else {
        player->srcRect.width = 64;
    }

    if (player->playerFlags.isFacingUp) {
        player->playerTextures.playerCurrentTexture = player->playerTextures.playerRunUpTexture;
    }
    else if (player->playerFlags.isFacingDown) {
        player->playerTextures.playerCurrentTexture = player->playerTextures.playerRunDownTexture;
    }
    else {
        player->playerTextures.playerCurrentTexture = player->playerTextures.playerIdleTexture;
    }

}
