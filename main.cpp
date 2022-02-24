#include <iostream>
#include "table.h"


int main(){
  table board;
  std::cout << "How would you like to solve? Options:\n1) Solve randomly select col\n2) Solve Cyclic\n";
  int choice = 0;
  std::cin >> choice;
    switch (choice) {
      case 1:
        board.solveRandom();
        break;
      case 2:
        board.solveCyclic();
        break;
      default:
        std::cout << "Please enter a value between 1-2";
        break;
    }
}
