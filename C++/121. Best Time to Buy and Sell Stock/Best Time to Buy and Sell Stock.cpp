//
// Created by 韩正博 on 18/4/20.
//
#include "../header.h"

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int result = INT8_MIN;
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
    }
};