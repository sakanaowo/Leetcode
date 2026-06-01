#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int> &nums) {
        int n = nums.size();
        vector<bool> seen(n + 1, false);
        for (int i: nums) {
            if (i > 0 && i <= n)seen[i] = true;
        }
        for (int i = 1; i <= n; i++) {
            if (!seen[i]) return i;
        }
        return n + 1;
    }
};
