//
// Created by Squid on 8/21/2026.
//
#include "ScreenManager.h"
#include "Screens/Screens.h"
#include "raylib.h"

void ScreenManager::init_current_screen() const {
  switch (currentScreen) {
  case Screen::Logo:
    Init_Logo_Screen();
    break;
  case Screen::Title:
    Init_Title_Screen();
    break;
  case Screen::MainMenu:
    Init_MainMenu_Screen();
    break;
  case Screen::Game1:
    Init_Game_Screen();
    break;
  default:
    break;
  }
}

void ScreenManager::update_current_screen() {
  switch (currentScreen) {
  case Screen::Logo:
    Update_Logo_Screen(*this);
    break;
  case Screen::Title:
    Update_Title_Screen(*this);
    break;
  case Screen::MainMenu:
    Update_MainMenu_Screen();
    break;
  case Screen::Game1:
    Update_Game_Screen();
    break;
  default:
    break;
  }
}

void ScreenManager::draw_current_screen() const {
  switch (currentScreen) {
  case Screen::Logo:
    Draw_Logo_Screen();
    break;
  case Screen::Title:
    Draw_Title_Screen();
    break;
  case Screen::MainMenu:
    Draw_MainMenu_Screen();
    break;
  case Screen::Game1:
    Draw_Game_Screen();
    break;
  default:
    break;
  }

  DrawFPS(10, 10);
}