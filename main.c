
#include "raylib.h"
#include "Entites/Player.h"

int main(void) {

    int screenWidth = 800;
    int screenHeight = 600;
    Player player;
    InitWindow(screenWidth, screenHeight, "Catalyst Engine");
    InitPlayer(&player);

    SetTargetFPS(60);
    while(!WindowShouldClose()) {
        const float deltaTime = GetFrameTime();
        BeginDrawing();
        UpdatePlayer(&player, deltaTime);
        DrawFPS(10,10);
        DrawPlayer(&player);
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}