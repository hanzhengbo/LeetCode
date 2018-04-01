//
// Created by 韩正博 on 18/4/1.
//

#ifndef LEETCODE_FINDMINIMUMINROTATEDSORTEDARRAY_H
#define LEETCODE_FINDMINIMUMINROTATEDSORTEDARRAY_H


#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int min = INT8_MAX;
        if(len == 2){
            if(nums[0]< nums[1])
                return nums[0];
            else
                return nums[1];
        }
        if(len == 1)
            return nums[0];

        for(int i = 0 ; i < len ; i++){
            if(nums[i]<min)
                min = nums[i];
        }
        return min;
    }

};


#endif //LEETCODE_FINDMINIMUMINROTATEDSORTEDARRAY_H
