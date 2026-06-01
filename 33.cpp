#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if (it != nums.end()) return distance(nums.begin(), it);
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << s.search(v, 5) << endl;
}