//
// Created by 韩正博 on 18/3/31.
//

#ifndef LEETCODE_MOVEZEROES_H
#define LEETCODE_MOVEZEROES_H


#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {

        int len = nums.size();
        int zeros = 0;
        int nonzeros = 0;
        int temp = 0;
        if (len != 1) {
            for(int i = 0 ; i<len;i++){
                if(!nums[i])
                    zeros++;
            }
            for (int i = 0; i < len-temp; i++) {
                int m = 0;
                while ( m<len-temp) {
                    if(nums[m] == 0){
                        temp++;
                        int k = m;
                        while (k < len-temp) {
                            nums[k] = nums[k + 1];
                            k++;
                        }
                    }


                    m++;
                }
                m++;
            }
            for (int l = len - zeros; l < len; l++) {
                nums[l] = 0;
            }
        }
    }
};


#endif //LEETCODE_MOVEZEROES_H
