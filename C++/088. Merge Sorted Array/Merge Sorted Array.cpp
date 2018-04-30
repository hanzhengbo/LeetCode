//
// Created by 韩正博 on 18/4/29.
//
#include "../header.h"

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        for (int i = 1; i <= n; i++) {
            nums1[m + i - 1] = nums2[i - 1];
        }
        sort(nums1.begin(), nums1.end(), less<int>());
    }
};
