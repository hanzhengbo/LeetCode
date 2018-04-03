//
// Created by 韩正博 on 18/4/3.
//

#ifndef LEETCODE_FINDTHEDUPLICATENUMBER_H
#define LEETCODE_FINDTHEDUPLICATENUMBER_H

#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vector1;
        int result;
        for(int i = 0 ; i < nums.size();i++){
            vector1.push_back(2);
        }
        for(int i = 0 ; i < nums.size();i++){
            vector1[nums[i]]--;
        }
        for(int i = 0 ; i < nums.size();i++)
            if(vector1[i] < 1)
                result = i;
        return result;
    }
};


#endif //LEETCODE_FINDTHEDUPLICATENUMBER_H
