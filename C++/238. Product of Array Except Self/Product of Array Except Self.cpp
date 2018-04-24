//
// Created by 韩正博 on 18/4/23.
//

#include "../header.h"
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp = nums;
        vector<int> visit(len);

        for(int i = 0 ; i < len ; i++){
            if(visit[i])
                continue;
            nums[i] = 1;
            for(int j = 0 ; j < len ; j ++){
                if(j == i)
                    continue;
                nums[i]*=temp[j];
            }

            visit[i] = 1;
            for(int k = i+1 ; k < len ; k ++){
                if(temp[k] == temp[i]){
                    nums[k] = nums[i];
                    visit[k] = 1;
                }
            }
        }
        return nums;
    }
};