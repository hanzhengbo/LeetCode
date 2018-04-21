//
// Created by 韩正博 on 18/4/21.
//

#include "../header.h"
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int result = 0 ;
        for(int i = 0 ; i < len - 1 ; i ++){
            if(prices[i+1] - prices[i] > 0)
                result+=prices[i+1] - prices[i];
        }
        return result;
    }
};