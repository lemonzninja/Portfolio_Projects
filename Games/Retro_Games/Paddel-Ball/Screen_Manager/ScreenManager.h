//
// Created by Squid on 8/21/2026.
//

#ifndef PADDEL_BALL_SCREENMANAGER_H
#define PADDEL_BALL_SCREENMANAGER_H

enum class Screen {
    Logo,
    Title,
    MainMenu,
    Game1
};

class ScreenManager {
public:
    Screen currentScreen = Screen::Logo;

    void init_current_screen() const;
    void update_current_screen();
    void draw_current_screen() const;

private:

};



#endif //PADDEL_BALL_SCREENMANAGER_H
