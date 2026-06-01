#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxSum = INT_MIN;
        int current = 0;
        for (int i = 0; i < nums.size(); i++) {
            current += nums[i];
            if (current > maxSum) maxSum = current;
            if (current < 0) current = 0;
        }
        return maxSum;
    }
};
