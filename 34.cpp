#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if (it == nums.end()) return {-1, -1};
        int left = distance(nums.begin(), it);
        int right = left;
        while (right < nums.size() && nums[right] == target) {
            right++;
        }
        return {left, right - 1};
    }
};