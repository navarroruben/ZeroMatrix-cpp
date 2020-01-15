// Ruben Navarro
// 01/14/2019
// definitions.cpp
// CTCI - ZeroMatrix
// Sets respective rows and columns to 0 in matrix if 0 is found

#include <vector>
#include <iostream>
#include <utility>
#include "prototypes.h"

void displayMatrix(std::vector<std::vector<int> > v) {
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void locate2DZero(std::vector<std::vector<int> > &v) {
    // vector of pairs to hold x and y coordinates of 0s in matrix
    std::vector<std::pair<int, int>> p;
    // check for matrix and assign rows and col to 0
    for (int row = 0; row < v.size(); ++row) {
        for (int col = 0; col < v[0].size(); ++col) {
            if (v[row][col] == 0) {
                p.push_back(std::make_pair(row, col));
            }
        }
    }
    // gets data from container to assign 0s to rows and columns
    for (int i = 0; i < p.size(); ++i) {
        // assign 0s to rows
        for (int col = 0; col < v[p[i].first].size(); ++col) {
            v[p[i].first][col] = 0;
        }
        // assign 0s to columns
        for (int row = 0; row < v.size(); ++row) {
            v[row][p[i].second] = 0;
        }
    }
}