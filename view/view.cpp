#include <iostream>
#include "view.h"
#include "../basicOp/basicOp.h"

view::view() {
  int y;
  std::cout << "Welcome to the Basic Operation Calculator" << std::endl;
  std::cout << "What kind of Calculation do you want?" << std::endl;
  std::cout << "1. Basic Operation\n";
// This comment line below isn't finished yet
//  balik:
  std::cout << "Select: ";
  std::cin >> y;
//  if (y != 1 && static_cast<int>(y) || std::cin.fail()) {
//    goto balik;
//  } else {
    switch (y) {
      case 1:
        basicOperation();
        break;
      default:
        std::cout << "sing baleg ngeusian teh atu!" << std::endl;
        break;
//      }
  }
}

void view::basicOperation() {
  int x;
  std::cout << "Select the operation" << std::endl;
  std::cout << "1. Addition\n2. Subtraction\n3. Multipication\n4. Division" << std::endl;
//  uih:
  std::cout << "Select: ";
  std::cin >> x;
  std::cout << std::endl;
  if (x == 1 || x == 2 || x == 3 || x == 4) {
    basicOp myOperation(x);
//    goto uih;
  } else {
    std::cout << "sing baleg ngeusian teh atu!" << std::endl;
  }
  
}
