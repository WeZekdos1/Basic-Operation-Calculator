#include <ios>
#include <iostream>
#include <limits>
#include <stdexcept>
#include "view.h"
#include "../basicOp/basicOp.h"

void view::start() {
  int z;
  std::cout << "Welcome to My Calculator" << std::endl;
  std::cout << "Click [ CTRL + C ] to Exit" << std::endl;
  std::cout << std::endl << "What kind of Calculation do you want?" << std::endl;
  std::cout << "1. Basic Operation\n";
  std::cout << "Select: ";
  try {
  std::cin >> z;
    switch (z) {
      case 1:
        basicOperation();
        break;
      default:
	if (std::cin.fail()) {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::runtime_error("sing baleg ngeusian teh atu!");
	} else {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	throw std::runtime_error("pokonamah ngan aya 1 pilihan na!");
	}
        break;
    }
  }   catch(const std::runtime_error &e) {
	std::cout << std::endl << "#### " << e.what() << " ####" << std::endl;
	this->start();
      }
}

void view::basicOperation() {
  int y;
  std::cout << "Select the operation" << std::endl;
  std::cout << "1. Addition\n2. Subtraction\n3. Multipication\n4. Division" << std::endl;
  std::cout << "Select: ";
  this->selectOp(y);
}

void view::selectOp(int &x) {
  try {
    std::cin >> x;
    if (x == 1 || x == 2 || x == 3 || x == 4) {
      double a;
      double b;
      basicOp myOperation;
      switch (x) {
        case 1:
          myOperation.addition(a, b);
          break;
        case 2:
          myOperation.subtraction(a, b);
          break;
        case 3:
          myOperation.multiplication(a, b);
          break;
        case 4:
          myOperation.division(a, b);
          break;
      }
    } else if (std::cin.fail()) {
      	std::cin.clear();
      	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      	throw std::runtime_error("Please enter the correct input: ");
    } else {
      	std::cin.clear();
      	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      	throw std::runtime_error("Please enter the number between 1 to 4: ");
    }
  }

  catch (std::runtime_error &e) {
    std::cout << e.what();
    this->selectOp(x);
  }

}
