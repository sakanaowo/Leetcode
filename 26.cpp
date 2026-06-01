#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[left] != nums[r]) {
                left++;
                        }
        }
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        return left + 1;
    }
};
int main() {
    Solution S;
    vector<int> v = {1, 2, 3, 4, 5, 6, 6, 7, 9};
    cout << S.removeDuplicates(v) << endl;
}