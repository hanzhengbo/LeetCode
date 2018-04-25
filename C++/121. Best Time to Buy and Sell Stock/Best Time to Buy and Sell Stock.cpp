//
// Created by 韩正博 on 18/4/20.
//
#include "../header.h"

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        /**
         * 原始做法
         * int result = INT8_MIN;
        int len = prices.size();
        for (int i = 0; i < len - 1; i++) {
            for (int j = 1 + i; j < len; j++) {
                if (result <= (prices[j] - prices[i]))
                    result = prices[j] - prices[i];
            }
        }
        if (result < 0)
            result = 0;
        return result;
         */

        /**
         * DP做法
         */
        int vmax = INT32_MIN;
        int vmin = INT32_MAX;
        int len = prices.size();
        for (int i = 0; i < len; i++) {
            vmin = min(vmin, prices[i]);
            vmax = max(vmax, prices[i] - vmin);
        }
        if (vmax < 0)
            vmax = 0;
        return vmax;
    }
};