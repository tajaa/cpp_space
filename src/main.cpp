#include "game.hpp"
#include "laser.hpp"
#include <raylib.h>

int main() {
  Color grey = {99, 99, 97, 255};

  int windowWidth = 750;
  int windowHeight = 700;

  InitWindow(windowWidth, windowHeight, "C++ space invaders");
  SetTargetFPS(60);

  Game game;
  Laser laser = Laser({100, 100}, 7);

  while (WindowShouldClose() == false) {
    game.HandleInput();

    BeginDrawing();
    ClearBackground(grey);
    game.Draw();
    laser.Draw();

    EndDrawing();
  }

  CloseWindow();
}
