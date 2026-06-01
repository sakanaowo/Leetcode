#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int N;
    vector<vector<string> > ans;

    bool valid(vector<string> &board, int row, int col) {
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        for (int i = 0; i < row; i++) if (board[i][col] == 'Q') return false;
        for (int i = row, j = col; i >= 0 && j < N; i--, j++) if (board[i][j] == 'Q') return false;
        return true;
    }

    void solve(int row, vector<string> &board) {
        if (row == N) {
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < N; col++) {
            if (valid(board, row, col)) {
                board[row][col] = 'Q';
                solve(row + 1, board);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string> > solveNQueens(int n) {
        this->N = n;
        vector<string> board(n, string(n, '.'));
        solve(0, board);
        return ans;
    }
};

int main() {
    Solution s;
    s.solveNQueens(4);
    cout << s.ans.size() << endl;
}
