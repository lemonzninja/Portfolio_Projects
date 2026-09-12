//
// Created by Squid on 9/12/2026.
//
#ifndef PADDEL_BALL_GAMEMANAGER_H
#define PADDEL_BALL_GAMEMANAGER_H

#include "raylib.h"
#include "../GameObjects/Ball/Ball.h"
static Ball ball;


static float ballStartX;
static float ballStartY;
static float ballSize;
static Color ballColor;
static float ballSpeed;

class GameManager {
public:
    float ballStartX;
    float ballStartY;
    float ballSize;
    Color ballColor;
    float ballSpeed;

};


#endif //PADDEL_BALL_GAMEMANAGER_H