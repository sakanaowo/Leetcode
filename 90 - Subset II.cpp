#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > results;

    void dewy(int start, const vector<int> &nums, vector<int> &current) {
        results.push_back(current);
        for (int i = start; i < nums.size(); ++i) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            current.push_back(nums[i]);
            dewy(i + 1, nums, current);
            current.pop_back();
        }
    }

    vector<vector<int> > subsetsWithDup(vector<int> &nums) {
        vector<int> current;
        sort(nums.begin(), nums.end());
        dewy(0, nums, current);
        return results;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 2};
    vector<vector<int> > output = s.subsetsWithDup(nums);
    std::cout << "[";
    for (size_t i = 0; i < output.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < output[i].size(); ++j) {
            std::cout << output[i][j] << (j + 1 < output[i].size() ? "," : "");
        }
        std::cout << "]" << (i + 1 < output.size() ? "," : "");
    }
    std::cout << "]" << std::endl;
}
