#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        function<void(int, int, vector<int>&)> dewy =
            [&](int current, int index, vector<int>& vec) {
                if (current == 0) {
                    ans.push_back(vec);
                    return;
                } else if (current < 0) {
                    return;
                }
                for (int i = index; i < candidates.size(); i++) {
                    vec.push_back(candidates[i]);
                    dewy(current - candidates[i], i, vec);
                    vec.pop_back();
                }
            };
        vector<int> temp;
        dewy(target, 0, temp);
        return ans;
    }
};