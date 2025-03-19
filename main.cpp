#include <iostream>
#include "basicOp/basicOp.h"

int main() {
  std::cout << "Hello World!\n" << std::endl;

  basicOp myOperation;

  int a; int b;
  std::cin >> a;
  std::cin >> b;

  std::cout <<myOperation.addition(a, b)<< std::endl;
  return 0;
}
