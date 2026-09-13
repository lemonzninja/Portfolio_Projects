//
// Created by Squid on 9/12/2026.
//
#ifndef PADDEL_BALL_GAMEMANAGER_H
#define PADDEL_BALL_GAMEMANAGER_H

#include "raylib.h"
#include "../GameObjects/Ball/Ball.h"

class GameManager {
public:
    Ball ball;
    float ballStartX;
    float ballStartY;
    float ballSize;
    Color ballColor;
    float ballSpeed;

};

extern GameManager gameManager;
#endif //PADDEL_BALL_GAMEMANAGER_H