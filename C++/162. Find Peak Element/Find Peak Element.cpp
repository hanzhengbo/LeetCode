//
// Created by 韩正博 on 18/4/22.
//

#include "../header.h"
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int result = INT32_MIN;
        int len = nums.size();
        int index = 0;
        for(int i = 0 ; i < len ; i++){
            if(result<nums[i]){
                index = i;
                result = nums[i];
            }
        }
        return index;
    }
};