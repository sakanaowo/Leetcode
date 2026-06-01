// Write a program to solve a Sudoku puzzle by filling the empty cells.

// A sudoku solution must satisfy all of the following rules:

// Each of the digits 1-9 must occur exactly once in each row.
// Each of the digits 1-9 must occur exactly once in each column.
// Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
// The '.' character indicates empty cells.

#include <bits/stdc++.h>
using namespace std;

class Solution {
    int n = 3, N = 9;
    int rows[9][10] = {}, cols[9][10] = {}, boxes[9][10] = {};
    vector<vector<char>>* boardPtr;
    bool solved = false;

    bool couldPlace(int d, int row, int col) {
        int idx = (row / n) * n + col / n;
        return rows[row][d] + cols[col][d] + boxes[idx][d] == 0;
    }

   public:
    void solveSudoku(vector<vector<char>>& board) {
    }
};