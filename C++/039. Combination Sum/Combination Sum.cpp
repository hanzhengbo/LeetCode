//
// Created by 韩正博 on 18/5/15.
//
#include "../header.h"

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combine(ans, temp, candidates, target, 0, 0);
        return ans;
    }

    void combine(vector<vector<int>> &ans, vector<int> &temp, vector<int> &candidates, int target, int sum, int start) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        if (sum > target)
            return;
        int len = candidates.size();
        if (sum < target) {
            for (int i = start; i < len; i++) {
                temp.push_back(candidates[i]);
                sum += candidates[i];
                combine(ans, temp, candidates, target, sum, i);
                sum -= candidates[i];
                temp.pop_back();
            }
        }
    }
};
