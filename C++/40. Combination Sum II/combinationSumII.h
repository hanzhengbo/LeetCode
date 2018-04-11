//
// Created by 韩正博 on 18/4/1.
//

#ifndef LEETCODE_COMBINATIONSUMII_H
#define LEETCODE_COMBINATIONSUMII_H

#include <cstdio>
#include <vector>

using  namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int len = candidates.size();
        quickSort(candidates,0,len-1);
        vector<vector<int>> result;
        for(int i = 0 ; i < len ; i ++){
            vector<int> temp;
            int sum = candidates[i];
            if(sum>target)
                continue;
            temp.push_back(candidates[i]);
            if(sum == target){
                result.push_back(temp);
                continue;
            }
            for(int j = i+1 ; j < len ; j ++){
                if(sum+candidates[j]<target){
                    sum+=candidates[j];
                    temp.push_back(candidates[j]);
                    continue;
                }
                if(sum+candidates[j]>target)
                    continue;
                if(sum+candidates[j] == target){
                    temp.push_back(candidates[j]);
                    result.push_back(temp);
                    break;
                }
            }
        }
        return  result;
    }
    void quickSort(vector<int> &nums, int left, int right) {
        if (left > right) {
            return;
        }
        int i, j, temp;
        i = left;
        j = right;
        //以最左边的数作为基准数
        temp = nums[left];
        while (i != j) {
            //先从右边开始找小于temp的元素  注意等号
            while (nums[j] >= temp && i < j) {
                j--;
            }
            //再从左边开始找大于temp的元素
            while (nums[i] <= temp && i < j) {
                i++;
            }
            //左右哨兵均找到满足要求的数后，交换这两个数
            if (i < j) {
                int change = nums[i];
                nums[i] = nums[j];
                nums[j] = change;
            }
        }
        //i==j  将基准数归位，此时基准数左边的数均小于基准数，右边的数均大于基准数
        nums[left] = nums[j];
        nums[j] = temp;

        //然后递归处理基准左边未排序的数，和基准右边的数
        quickSort(nums, left, i - 1);
        quickSort(nums, i + 1, right);
    }
};


#endif //LEETCODE_COMBINATIONSUMII_H
