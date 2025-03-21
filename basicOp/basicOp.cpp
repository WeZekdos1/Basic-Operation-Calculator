#include "basicOp.h"
#include <iostream>

basicOp::basicOp(int input) {
  int x;
  int y;
// This comment line below isn't finished yet
// 
//  balik:
//  if ((input == 1 ||input == 2 || input == 3 || input == 4) && static_cast<int>(input) || std::cin.fail()) {
//      std::cout << "Select: ";
//      std::cin >> input;
//      goto balik;
//  } else {
    switch (input) {
      case 1:
        std::cout << "enter the first number: ";
        std::cin >> x;
        std::cout << "enter the second number: ";
        std::cin >> y;
        std::cout << "the result is: " << addition(x, y) << std::endl;
        break;
     case 2:
        std::cout << "enter the first number: ";
        std::cin >> x;
        std::cout << "enter the second number: ";
        std::cin >> y;
        std::cout << "the result is: " << subtraction(x, y) << std::endl;
        break;
      case 3:
        std::cout << "enter the first number: ";
        std::cin >> x;
        std::cout << "enter the second number: ";
        std::cin >> y;
        std::cout << "the result is: " << multipication(x, y) << std::endl;
        break;
      case 4:
        std::cout << "enter the first number: ";
        std::cin >> x;
        std::cout << "enter the second number: "; 
        std::cin >> y;
        std::cout << "the result is: " << division(x, y) << std::endl;
        break;
      default:
        std::cout << "sing baleg ngeusian teh atu!" << std::endl;
        break;
//    }
  }
}

int basicOp::addition(int first, int second) {
  x = first;
  y = second;
  return x + y;
}

float basicOp::addition(float first, float second) {
  x = first;
  y = second;
  return x + y;
}

int basicOp::subtraction(int first, int second) {
  x = first;
  y = second;
  return x - y;
}

float basicOp::subtraction(float first, float second) {
  x = first;
  y = second;
  return x - y;
}
int basicOp::multipication(int first, int second) {
  x = first;
  y = second;
  return x * y;
}

float basicOp::multipication(float first, float second) {
  x = first;
  y = second;
  return x * y;
}
int basicOp::division(int first, int second) {
  x = first;
  y = second;
  return (x / y);
}

float basicOp::division(float first, float second) {
  x = first;
  y = second;
  return x / y;
}

