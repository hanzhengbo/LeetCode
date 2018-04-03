//
// Created by 韩正博 on 18/4/2.
//

#ifndef LEETCODE_TOPKFREQUENTELEMENTS_H
#define LEETCODE_TOPKFREQUENTELEMENTS_H

#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        quickSort(nums, 0, nums.size() - 1);
        map<int, int> res;
        vector<int> result;
        vector<pair<int, int>> arr;
        int count = 0;
        for (int i = 1; i <= nums.size(); i++) {
            count++;
            if (nums[i] != nums[i - 1]) {
                res.insert(pair<int, int>(nums[i - 1], count));
                count = 0;
            }
        }
        for (map<int, int>::iterator it = res.begin(); it != res.end(); ++it) {
            arr.push_back(make_pair(it->first, it->second));
        }

        sort(arr.begin(), arr.end(), cmp);

        int temp = 0;
        for (vector<pair<int, int> >::iterator it = arr.begin(); it != arr.end(); ++it) {
            if (temp == k)
                break;
            result.push_back(it->first);
            temp++;
        }
        return result;
    }

    static bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)//要用常数，不然编译错误
    {
        return p1.second > p2.second;
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


#endif //LEETCODE_TOPKFREQUENTELEMENTS_H
