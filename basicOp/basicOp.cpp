#include "basicOp.h"
#include <cmath>
#include <ios>
#include <iostream>
#include <limits>
#include <stdexcept>

void basicOp::inputNum(int &u) { 
  try {
    std::cin >> u;
    if (std::cin.fail()) {
      // clear the error & ignore the failed input
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      throw std::runtime_error("Please enter the correct input: ");  
    } 
    // clear the error & ignore the remain input buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
    }

    catch (const std::runtime_error &e) {
      std::cout << e.what();
      inputNum(u);
    } 
  }

void basicOp::inputNum(float &u) { 
  try {
    std::cin >> u;
    if (std::cin.fail()) {
      // clear the error & ignore the failed input
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      throw std::runtime_error("Please enter the correct input: ");  
    } 
    // clear the error & ignore the remain input buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
    }

    catch (const std::runtime_error &e) {
      std::cout << e.what();
      inputNum(u);
    } 
  }

/* void basicOp::selectOperation(int z) {
  int x;
  int y;
    switch (z) {
      case 1:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << addition(x, y) << std::endl;
        break;
     case 2:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << subtraction(x, y) << std::endl;
        break;
      case 3:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << multiplication(x, y) << std::endl;
        break;
      case 4:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: "; 
        inputNum(y);
        std::cout << "the result is: " << division(x, y) << std::endl;
        break;
      default:
        std::cout << "Sing Baleg ngeusian teh atu!" << std::endl;
        break;
  }
} */

/* void basicOp::selectOperation(float z) {
  int s = std::roundf(z);
  float x;
  float y;
    switch (s) {
      case 1:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << addition(x, y) << std::endl;
        break;
     case 2:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << subtraction(x, y) << std::endl;
        break;
      case 3:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: ";
        inputNum(y);
        std::cout << "the result is: " << multiplication(x, y) << std::endl;
        break;
      case 4:
        std::cout << "enter the first number: ";
        inputNum(x);
        std::cout << "enter the second number: "; 
        inputNum(y);
        std::cout << "the result is: " << division(x, y) << std::endl;
        break;
      default:
        std::cout << "Sing Baleg ngeusian teh atu!" << std::endl;
        break;
  }
} */

void basicOp::addition(int first, int second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  int result = first + second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::addition(float first, float second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  float result = first + second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::subtraction(int first, int second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  int result = first - second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::subtraction(float first, float second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  float result = first - second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::multiplication(int first, int second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  int result = first * second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::multiplication(float first, float second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  float result = first * second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::division(int first, int second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  int result = first / second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::division(float first, float second) {
  std::cout << "Enter the first number: ";
  inputNum(first);
  std::cout << "Enter the second number: ";
  inputNum(second);
  float result = first / second;
  std::cout << "The result is: " << result << std::endl;
}
