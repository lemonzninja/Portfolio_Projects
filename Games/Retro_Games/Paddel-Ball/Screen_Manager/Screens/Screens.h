//
// Created by Squid on 8/22/2026.
//

#ifndef PADDEL_BALL_SCREENS_H
#define PADDEL_BALL_SCREENS_H

#include "../../Screen_Manager/ScreenManager.h"

void Init_Logo_Screen();
void Update_Logo_Screen(ScreenManager& screenManager);
void Draw_Logo_Screen();

void Init_Title_Screen();
void Update_Title_Screen(ScreenManager& screenManager);
void Draw_Title_Screen();

void Init_MainMenu_Screen();
void Update_MainMenu_Screen();
void Draw_MainMenu_Screen();

void Init_Game_Screen();
void Update_Game_Screen();
void Draw_Game_Screen();

#endif //PADDEL_BALL_SCREENS_H