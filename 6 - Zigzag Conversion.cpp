#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<vector<char>> v(numRows);
        int i = 0, row = 0, k = 1;
        while (i < s.size()) {
            v[row].push_back(s[i++]);
            row += k;
            if (row == numRows - 1) k = -1;
            if (row == 0) k = 1;
        }
        string ans = "";
        for (auto x: v)
            for (auto y: x) ans += y;
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.convert("PAYPALISHIRING",3) << endl;
}
