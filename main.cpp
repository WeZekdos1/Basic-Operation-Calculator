#include <iostream>
#include "basicOp/basicOp.h"

int main() {
  int x;
  std::cout << "Welcome to the Basic Operation Calculator" << std::endl;
  std::cout << "Select the operation option" << std::endl;
  std::cout << "1. Addition\n2. Subtraction\n3. Multipication\n4. Division" << std::endl;
  std::cout << "Select: ";
  std::cin >> x;
  std::cout << std::endl;

  basicOp myOperation(x);

  return 0;
}
