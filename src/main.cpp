#include "game.hpp"
#include <raylib.h>

int main() {
  Color grey = {99, 99, 97, 255};

  int windowWidth = 750;
  int windowHeight = 700;

  InitWindow(windowWidth, windowHeight, "C++ space invaders");
  SetTargetFPS(60);

  Game game;

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(grey);
    game.Draw();

    EndDrawing();
  }

  CloseWindow();
}
