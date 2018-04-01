//
// Created by 韩正博 on 18/4/1.
//

#ifndef LEETCODE_SUBARRAYSUMEQUALSK_H
#define LEETCODE_SUBARRAYSUMEQUALSK_H


#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &nums, int k) {
        int len = nums.size();
        int count = 0;
        for (int i = 0; i < len; i++) {
            int res = 0;
            for (int j = i; j < len; j++) {

                res += nums[j];


                if (res == k) {
                    count++;
                }
            }
        }
        return count;
    }
};


#endif //LEETCODE_SUBARRAYSUMEQUALSK_H
