//
// Created by 韩正博 on 18/4/9.
//

#ifndef LEETCODE_CONTINUOUSSUBARRAYSUM_H
#define LEETCODE_CONTINUOUSSUBARRAYSUM_H


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        for(int i = 0 ; i < len ; i++){
            int sum = nums[i];
            for(int j = i+1 ; j < len ; j++){
                sum+=nums[j];
                if(k!=0){
                    if(sum % k ==0)
                        return true;
                }
                else
                    if(sum == 0)
                        return true;

            }
        }
        return false;
    }
};


#endif //LEETCODE_CONTINUOUSSUBARRAYSUM_H
