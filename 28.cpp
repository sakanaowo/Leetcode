#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
        // for (auto x: nums) cout << x;
    }
};

int main() {
    Solution l;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    l.nextPermutation(nums);
}
