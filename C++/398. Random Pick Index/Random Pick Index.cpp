//
// Created by 韩正博 on 18/4/23.
//

#include "../header.h"
class Solution {
    vector<int> number;
public:
    Solution(vector<int> nums) {
        number = nums;
    }

    int pick(int target) {
        int len = number.size();
        vector<int> resultset;
        for(int i = 0 ; i < len ;i++){
            if(target == number[i])
                resultset.push_back(i);
        }
        random_shuffle(resultset.begin(),resultset.end());
        int res = resultset[0];
        return res;
    }
};