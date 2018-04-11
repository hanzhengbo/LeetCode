//
// Created by 韩正博 on 18/4/1.
//

#ifndef LEETCODE_FINDALLDUPLICATESINANARRAY_H
#define LEETCODE_FINDALLDUPLICATESINANARRAY_H


#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vector1;//用于插入已知数
        vector<int> res;

        int len = nums.size();

        for(int i = 0 ; i < len ; i++){
            vector1.push_back(2);
        }

        for(int i = 0 ; i < len ; i++){
            vector1[nums[i]-1]--;
        }
        for(int i = 0 ; i < len ; i++){
            if(vector1[i]<1){
                res.push_back(i+1);
            }
        }
        return res;
    }

};


#endif //LEETCODE_FINDALLDUPLICATESINANARRAY_H
