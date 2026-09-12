#include "raylib.h"
#include "Screen_Manager/ScreenManager.h"

// -If for the web!
#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif
//----------------------------------------

static int screenWidth = 800;
static int screenHeight = 450;
static auto WindowTitle = "Window [core]";

static ScreenManager screenManager;

static void Init();    // Initialize game
static void Update();           // Update game logic
static void Draw();                    // Draw game on screen
static void UpdateDrawFrame();     // Update and Draw one frame
static void DeInitialization();

static void Init()
{
    InitWindow(screenWidth, screenHeight, WindowTitle);
    SetTargetFPS(60); // Set our game to run at 60 frames-per-second
    screenManager.init_current_screen();
}

static void Update()
{
    screenManager.update_current_screen();
}

static void Draw()
{
    screenManager.draw_current_screen();
}

int main()
{
    Init();

#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else

    // Main game loop
    while (!WindowShouldClose())
    {
        UpdateDrawFrame();
    }
#endif

    // De-Initialization
    DeInitialization();
    CloseWindow();
    return 0;
}

void UpdateDrawFrame()
{
    Update();

    BeginDrawing();
    Draw();
    EndDrawing();
}

void DeInitialization(){}