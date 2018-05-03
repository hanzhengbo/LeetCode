//
// Created by 韩正博 on 18/5/3.
//
#include "../header.h"

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int maxp = nums[0];
        int minp = nums[0];
        int res = 0;
        int len = nums.size();
        for (int i = 1; i < len; i++) {
            if (nums[i] < 0) {
                int temp = maxp;
                maxp = minp;
                minp = temp;
            }
            maxp = max(nums[i], maxp * nums[i]);
            minp = min(nums[i], minp * nums[i]);
            res = max(res, maxp);
        }
        return res;
    }
};
