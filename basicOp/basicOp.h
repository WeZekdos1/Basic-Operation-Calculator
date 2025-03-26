#ifndef BASICOP_H
#define BASICOP_H

class basicOp {
public:
  // basicOp(int input);

  // void selectOperation(int z);
  // void selectOperation(float z);

  void inputNum(int &u);
  void inputNum(float &u);

  void addition(int first, int second);
  void addition(float first, float second);

  void subtraction(int first, int second);
  void subtraction(float first, float second);

  void multiplication(int first, int second);
  void multiplication(float first, float second);

  void division(int first, int second);
  void division(float first, float second);

};

#endif // BASICOP_H
