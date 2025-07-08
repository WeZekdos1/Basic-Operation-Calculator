#include "basicOp.h"
#include <cmath>
#include <ios>
#include <iostream>
#include <limits>
#include <stdexcept>

void basicOp::inputNum(double &u) { 
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
      this->inputNum(u);
    } 
  }

void basicOp::addition(double first, double second) {
  std::cout << "Enter the first number: ";
  this->inputNum(first);
  std::cout << "Enter the second number: ";
  this->inputNum(second);
  double result = first + second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::subtraction(double first, double second) {
  std::cout << "Enter the first number: ";
  this->inputNum(first);
  std::cout << "Enter the second number: ";
  this->inputNum(second);
  double result = first - second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::multiplication(double first, double second) {
  std::cout << "Enter the first number: ";
  this->inputNum(first);
  std::cout << "Enter the second number: ";
  this->inputNum(second);
  double result = first * second;
  std::cout << "The result is: " << result << std::endl;
}

void basicOp::division(double first, double second) {
  std::cout << "Enter the first number: ";
  this->inputNum(first);
  std::cout << "Enter the second number: ";
  this->inputNum(second);
  double result = first / second;
  std::cout << "The result is: " << result << std::endl;
}
