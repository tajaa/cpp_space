
#ifndef BALL_H
#define BALL_H

class Ball {
public:
  Ball();
  void Update();
  void Draw();

private:
  float x, y;
  float speedX, speedY;
  float radius;
};

#endif // BALL_H
