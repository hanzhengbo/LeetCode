//
// Created by 韩正博 on 18/4/1.
//

#ifndef LEETCODE_ROTATEARRAY_H
#define LEETCODE_ROTATEARRAY_H


#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int len = nums.size();
        for(int i = 0 ; i < len; i ++){//初始化一个vector
            temp.push_back(0);
        }
        for(int i = 0 ; i < len; i++){
            int j = i;
            int index = j+k;
            if(index>=len)
                index = index%len;
            temp[index] = nums[i];
        }
        for(int i = 0 ; i < len ; i++){
            nums[i] = temp [i];
        }
    }
};


#endif //LEETCODE_ROTATEARRAY_H
