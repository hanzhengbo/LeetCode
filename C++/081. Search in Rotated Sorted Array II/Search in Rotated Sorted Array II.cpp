//
// Created by 韩正博 on 18/4/28.
//
#include "../header.h"

class Solution {
public:
    bool search(vector<int> &nums, int target) {
        int len = nums.size();
        for (int i = 0; i < len; i++)
            if (nums[i] == target)
                return true;
        return false;

        /**
         * 分享一个二分查找的方法
         * int left = 0;
        int right = nums.size() - 1;
        int mid;

        while(left <= right)
        {
            mid = (left + right) >> 1;
            if(nums[mid] == target)
                return true;

            if(nums[left] == nums[mid] && nums[right] == nums[mid])
            {
                ++left;
                --right;
            }
            else if(nums[left] <= nums[mid])
            {
                if(nums[left] <= target && nums[mid] > target)
                    right = mid - 1;
                else left = mid + 1;
            }
            else
            {
                if(nums[mid] < target && nums[right] >= target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return false;
         */
    }
};
