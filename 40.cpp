#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        dewy(candidates, target, 0, res, comb);
        return res;
    }

   private:
    void dewy(vector<int>& candidates, int target, int index, vector<vector<int>>& res, vector<int>& comb) {
        if (target == 0) {
            res.push_back(comb);
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            if (candidates[i] > target) break;
            comb.push_back(candidates[i]);
            dewy(candidates, target - candidates[i], i + 1, res, comb);
            comb.pop_back();
        }
    }
};