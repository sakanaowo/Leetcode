#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);
        while (--k) next_permutation(v.begin(), v.end());
        string s = "";
        for (auto x: v) s += to_string(x);
        return s;
    }
};

int main() {
    Solution s;
    cout << s.getPermutation(5, 3) << endl;
    cout << s.getPermutation(4, 9) << endl;
    cout << s.getPermutation(3, 6) << endl;
}
