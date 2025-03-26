#include <ios>
#include <iostream>
#include <limits>
#include <stdexcept>
#include "view.h"
#include "../basicOp/basicOp.h"

view::view() {
  int z;
  std::cout << "Welcome to the Basic Operation Calculator" << std::endl;
  std::cout << "What kind of Calculation do you want?" << std::endl;
  std::cout << "1. Basic Operation\n";
  std::cout << "Select: ";
  std::cin >> z;
    switch (z) {
      case 1:
        basicOperation();
        break;
      default:
        std::cout << "sing baleg ngeusian teh atu!" << std::endl;
        break;
  }
}

void view::basicOperation() {
  int y;
  std::cout << "Select the operation" << std::endl;
  std::cout << "1. Addition\n2. Subtraction\n3. Multipication\n4. Division" << std::endl;
  std::cout << "Select: ";
  selectOp(y);
}

void view::selectOp(int &x) {
  try {
    std::cin >> x;
    if (x == 1 || x == 2 || x == 3 || x == 4) {
      float a;
      float b;
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
    selectOp(x);
  }

}
