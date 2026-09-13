//
// Created by Squid on 8/22/2026.
//

#include "raylib.h"
#include "Screens.h"
#include "../../Game_Manager/GameManager.h"

void Init_Game_Screen() {
    gameManager.ballStartX = 400.0f;
    gameManager.ballStartY = 250.0f;
    gameManager.ballSize = 10.0f;
    gameManager.ballColor = WHITE;
    gameManager.ballSpeed = 200.0f;

    gameManager.ball.ball_velocity.x = gameManager.ballSpeed;
    gameManager.ball.ball_velocity.y = gameManager.ballSpeed;
    gameManager.ball.Init_Ball(gameManager.ballStartX, gameManager.ballStartY, gameManager.ballSize, gameManager.ballColor);
}
void Update_Game_Screen() {
    gameManager.ball.Update_Ball();
}
void Draw_Game_Screen() {
    ClearBackground(BLACK);
    gameManager.ball.Draw_Ball();
}