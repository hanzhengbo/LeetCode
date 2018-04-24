//
// Created by 韩正博 on 18/4/24.
//
#include "../header.h"

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int len = nums.size();
        int count = 1;
        for (int i = 1; i < len; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
                continue;
            }

            if (nums[i] != nums[i - 1]) {
                if (count == 2) {
                    count = 1;
                    if (i == len - 1)
                        return nums[len - 1];
                    continue;
                } else
                    return nums[i - 1];
            }
        }
        return 0;
    }
};

/**
 * 分享一个二分查找的方法 O(logn) time
 * class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), left = 0, right = n - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid-1]) right = mid - 2;
                else if (nums[mid] == nums[mid+1]) left = mid + 2;
                else return nums[mid];
            }
            else {
                if (nums[mid] == nums[mid-1]) left = mid + 1;
                else if (nums[mid] == nums[mid+1]) right = mid - 1;
            }
        }
        return nums[left];
    }
};
 */

