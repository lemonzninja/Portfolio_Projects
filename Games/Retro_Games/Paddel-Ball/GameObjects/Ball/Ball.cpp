//
// Created by Squid on 9/7/2026.
//

#include "Ball.h"

void Ball::Init_Ball(const float pos_x, const float pos_y, const float radius, const Color color) {
    ball_position = {.x = pos_x, .y = pos_y};
    ball_Size = radius;
    ball_color = color;
}

void Ball::Update_Ball() {
    const float dt = GetFrameTime();
    ball_position.x += ball_velocity.x * dt;
    ball_position.y += ball_velocity.y * dt;

    if (ball_position.x <= 0) {
        ball_position.x = 0;
        ball_velocity.x *= -1;
    }
    if (ball_position.x + ball_Size >= GetScreenWidth()) {
        ball_position.x = GetScreenWidth() - ball_Size;
        ball_velocity.x *= -1;
    }
    if (ball_position.y <= 0) {
        ball_position.y = 0;
        ball_velocity.y *= -1;
    }
    if (ball_position.y + ball_Size >= GetScreenHeight()) {
        ball_position.y = GetScreenHeight() - ball_Size;
        ball_velocity.y *= -1;
    }
}

void Ball::Draw_Ball() const {
    DrawRectangle(static_cast<int>(ball_position.x), static_cast<int>(ball_position.y),
        static_cast<int>(ball_Size), static_cast<int>(ball_Size), ball_color);
}