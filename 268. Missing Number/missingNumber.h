//
// Created by 韩正博 on 18/3/31.
//

#ifndef LEETCODE_MISSINGNUMBER_H
#define LEETCODE_MISSINGNUMBER_H

#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> vector1;//用于插入已知数
        int res;
        int max = INT8_MIN;
        int len = nums.size();

        if(len == 1){
            if(nums[0] == 1)
                return 0;
            else
                return 1;
        }

        for(int i = 0 ; i < len ; i++){
            if(nums[i]>=max)
                max = nums[i];
        }
        if(max!=len)
            return len;

        for(int i = 0 ; i < max ; i++){
            vector1.push_back(0);
        }

        for(int i = 0 ; i < len ; i++){
            vector1[nums[i]]=1;
        }
        for(int i = 0 ; i < max ; i++){
            if(!vector1[i]){
                res=(i);
            }
        }
        return res;
    }

};


#endif //LEETCODE_MISSINGNUMBER_H
