//
// Created by 韩正博 on 18/4/3.
//

#ifndef LEETCODE_FIRSTMISSINGPOSITIVE_H
#define LEETCODE_FIRSTMISSINGPOSITIVE_H

#include <cstdio>
#include <vector>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bucket_sort(nums);
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] != (i + 1))
                return i + 1;
        return nums.size() + 1;
    }
    void bucket_sort(vector<int>& A) {
        const int n = A.size();
        for (int i = 0; i < n; i++) {
            while (A[i] != i + 1) {
                if (A[i] <= 0 || A[i] > n || A[i] == A[A[i] - 1])//A[i] == A[A[i]-1]的本质为 A[i] == i+1  (可理解为函数自变量和因变量)
                    break;
                swap(A[i], A[A[i] - 1]);
            } }
    }
};


#endif //LEETCODE_FIRSTMISSINGPOSITIVE_H
