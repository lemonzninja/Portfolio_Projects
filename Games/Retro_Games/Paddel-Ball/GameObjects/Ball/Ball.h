//
// Created by Squid on 9/7/2026.
//

#ifndef PADDEL_BALL_BALL_H
#define PADDEL_BALL_BALL_H
#include "raylib.h"

class Ball {

public:
    Vector2 ball_position{};
    Vector2 ball_velocity{};
    float ball_Size{};
    Color  ball_color{};

    void Init_Ball(float pos_x, float pos_y, float radius, Color color);
    void Update_Ball();
    void Draw_Ball() const;
};


#endif //PADDEL_BALL_BALL_H