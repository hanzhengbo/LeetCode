//
// Created by 韩正博 on 18/3/30.
//

#ifndef EXERCISE2_TWOSUM_H
#define EXERCISE2_TWOSUM_H


#include <cstdlib>

int* twoSum(int* nums, int numsSize, int target) {
    int *numbers = (int*)malloc(sizeof(int)*2);
    for(int i = 0;i<numsSize;i++){
        for(int j = i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){

                numbers[0]=i;
                numbers[1]=j;
            }
        }
    }
    return numbers;
}


#endif //EXERCISE2_TWOSUM_H
