//
// Created by 韩正博 on 18/4/3.
//

#ifndef LEETCODE_SINGLENUMBERII_H
#define LEETCODE_SINGLENUMBERII_H

#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int change = 0;
        int number;
        if(nums.size() == 1 || nums.size() == 2)
            return nums[0];
        quickSort(nums,0,nums.size()-1);
        if((nums[0]!=nums[1]) || nums[0]!=nums[2])
            return nums[0];
        for(int i = 0; i < nums.size()-1;i = i+3){
            if(nums[i]!=nums[i+1] || nums[i]!=nums[i+2]){
                number = nums[i];
                change++;
                break;
            }
        }
        if(change == 0 )
            number = nums[nums.size()-1];
        return number;
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


#endif //LEETCODE_SINGLENUMBERII_H
