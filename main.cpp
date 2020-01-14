// Ruben Navarro
// 01/14/2019
// main.cpp
// CTCI - ZeroMatrix
// Sets respective rows and columns to 0 in matrix if 0 is found

#include <vector>
#include "prototypes.h"

int main() {

    // test cases

    // std::vector<std::vector<int>> v {{0}};
   // std::vector<std::vector<int>> v {{0, 1, 2, 0}, {3, 1, 5, 2}, {1, 3, 1, 5}};
      std::vector<std::vector<int>> v {{0, 1, 0}, {1, 1, 1}, {1, 1, 1}};
   // std::vector<std::vector<int>> v {{1, 1, 0, 1}};
   // std::vector<std::vector<int>> v {{1},{1}};
   // std::vector<std::vector<int>> v {{1, 1, 1}};

  // locates 0 in 2d array
   locate2DZero(v);

   // displays matrix
   displayMatrix(v);
    return 0;
}
