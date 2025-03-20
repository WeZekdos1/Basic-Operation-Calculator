#include "basicOp.h"
#include <iostream>

basicOp::basicOp(int input) {
  int x;
  int y;
  while (true) {
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
        std::cout << "sing baleg ngeusian th" << std::endl;
        break;
      
    }
    break;
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

