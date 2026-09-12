//
// Created by Squid on 8/22/2026.
//
#include <iostream>
#include <ostream>

#include "Screens.h"
#include "raylib.h"


static int game_select_text_size;
static const char* single_player_game_select;
static Color game_select_color;
static int single_player_game_select_x;
static int single_player_game_select_y;
static Rectangle game_select_rect;

static int title_text_size;
static const char* title_text;
static Color title_color;
static int title_text_x;
static int title_text_y;

void Init_Title_Screen() {
    title_text_size = 60;
    title_text = "Paddel Ball";
    title_color = WHITE;
    title_text_x = GetScreenWidth() / 2 - MeasureText(title_text, title_text_size) / 2;
    title_text_y = GetScreenHeight() / 2 - 100;

    game_select_text_size = 30;
    single_player_game_select = "Play Game";
    game_select_color = WHITE;
    single_player_game_select_x = GetScreenWidth() / 2 - MeasureText(single_player_game_select, game_select_text_size) / 2;
    single_player_game_select_y = GetScreenHeight() / 2 + 25;

    // init Game select rect
    game_select_rect = {
        static_cast<float>(single_player_game_select_x), static_cast<float>(single_player_game_select_y),
        static_cast<float>(MeasureText(single_player_game_select, game_select_text_size)),
        static_cast<float>(game_select_text_size)
    };
}

void Update_Title_Screen(ScreenManager &screenManager) {
    // Check if the mouse is over the the Game Select Text to Light gray.
    if (CheckCollisionPointRec(GetMousePosition(), game_select_rect)) {
        game_select_color = GRAY;
    } else {
        game_select_color = WHITE;
    }

    // know when the mouse pos is the same as the Game Select Rect and if the mouse left button if down.
    if (IsMouseButtonDown(MOUSE_LEFT_BUTTON) && CheckCollisionPointRec(GetMousePosition(), game_select_rect)) {
        screenManager.currentScreen = Screen::Game1;
        Init_Game_Screen();
        std::cout << "Transition to Game Screen" << std::endl;
    }
}

void Draw_Title_Screen() {
    ClearBackground(BLACK);
    // Draw the Title.
    DrawText(title_text,title_text_x, title_text_y,title_text_size ,title_color);
    // Draw the Game Select.
    DrawText(single_player_game_select, single_player_game_select_x,
        single_player_game_select_y, game_select_text_size, game_select_color);
}