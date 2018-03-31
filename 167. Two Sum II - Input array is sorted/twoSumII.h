//
// Created by 韩正博 on 18/3/31.
//

#ifndef LEETCODE_TWOSUMII_H
#define LEETCODE_TWOSUMII_H

#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result ;
        int length = numbers.size();
        for(int i = 0 ; i < length ; i ++){
            if((numbers[i]+numbers[length-1])<target)
                continue;
            for(int j = i+1 ; j < length ; j ++){
                if(numbers[i]+numbers[j]>target)
                    break;
                if(numbers[i]+numbers[j] == target){
                    result.push_back(i+1);
                    result.push_back(j+1);
                }

            }
        }
        return result;
    }
};


#endif //LEETCODE_TWOSUMII_H
