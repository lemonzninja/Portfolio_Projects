//
// Created by Squid on 8/22/2026.
//

#include "raylib.h"
#include "Screens.h"
#include "../../Game_Manager/GameManager.h"

void Init_Game_Screen() {
    ballStartX = 400.0f;
    ballStartY = 250.0f;
    ballSize = 10.0f;
    ballColor = WHITE;
    ballSpeed = 100.0f;

    ball.ball_velocity.x = ballSpeed;
    ball.Init_Ball(ballStartX, ballStartY, ballSize, ballColor);
}
void Update_Game_Screen() {
    ball.Update_Ball();
}
void Draw_Game_Screen() {
    ClearBackground(BLACK);

   ball.Draw_Ball();
}