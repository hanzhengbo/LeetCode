//
// Created by 韩正博 on 18/4/22.
//

#include "../header.h"
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int len = nums.size();
        int decreasetime = 0;
        for(int i = 0 ; i < len-1 ; i ++){
            if(nums[i] > nums[i+1])
                decreasetime++;
            if(decreasetime>1)
                return false;
        }
        //int max = nums[0];
        if(len >= 4){
            for(int i = 1 ; i < len-2; i ++){
                int absnum = abs(nums[i+2] - nums[i-1]);
                if(nums[i] > nums[i+1] && nums[i] > nums[i+2] && nums[i-1] >=nums[i+1])
                    return false;
            }
        }
        return true;
    }
};