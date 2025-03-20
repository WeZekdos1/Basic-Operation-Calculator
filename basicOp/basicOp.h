#ifndef BASICOP_H
#define BASICOP_H

class basicOp {
private:
  int x;
  int y;
public:
  basicOp(int input);

  int addition(int first, int second);
  float addition(float first, float second);

  int subtraction(int first, int second);
  float subtraction(float first, float second);

  int multipication(int first, int second);
  float multipication(float first, float second);

  int division(int first, int second);
  float division(float first, float second);

};

#endif // BASICOP_H
