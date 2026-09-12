cmake_minimum_required(VERSION 3.25)

project(Paddel-Ball LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Build the copy of raylib included with this project.
set(BUILD_EXAMPLES OFF CACHE BOOL "Do not build raylib examples" FORCE)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build raylib as a static library" FORCE)
add_subdirectory(libs/raylib)

add_executable(${PROJECT_NAME}
    main.cpp
        Screen_Manager/ScreenManager.cpp
        Screen_Manager/ScreenManager.h
        Screen_Manager/Screens/LogoScreen.cpp
        Screen_Manager/Screens/Screens.h
        Screen_Manager/Screens/TitleScreen.cpp
        Screen_Manager/Screens/MainMenuScreen.cpp
        Screen_Manager/Screens/GameScreen.cpp
        GameObjects/Ball/Ball.cpp
        GameObjects/Ball/Ball.h
        Game_Manager/GameManager.cpp
        Game_Manager/GameManager.h
)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

# Run with: cmake --build build --target run
add_custom_target(run
    COMMAND $<TARGET_FILE:${PROJECT_NAME}>
    DEPENDS ${PROJECT_NAME}
    WORKING_DIRECTORY $<TARGET_FILE_DIR:${PROJECT_NAME}>
    USES_TERMINAL
)