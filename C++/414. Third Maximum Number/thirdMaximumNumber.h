//
// Created by 韩正博 on 18/4/2.
//

#ifndef LEETCODE_THIRDMAXIMUMNUMBER_H
#define LEETCODE_THIRDMAXIMUMNUMBER_H


#include <cstdio>
#include <vector>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int> &nums) {
        int first = INT8_MIN;
        int second = INT8_MIN;
        int third = INT8_MIN;
        vector<int> noduplicates = removeDuplicates(nums);
        int len = noduplicates.size();

        if (len == 1)
            return noduplicates[0];

        if (len == 2) {
            if (noduplicates[1] >= noduplicates[0])
                return noduplicates[1];
            else
                return noduplicates[0];
        }

        first = noduplicates[0];
        second = noduplicates[1];
        third = noduplicates[2];

        if (first <= second) {
            int temp;
            temp = second;
            second = first;
            first = temp;
        }
        if (first <= third) {
            int temp;
            temp = third;
            third = first;
            first = temp;
        }
        if (second <= third) {
            int temp;
            temp = second;
            second = third;
            third = temp;
        }
        int change = 0;
        int vfirst = first;
        int vsecond = second;
        int vthird = third;

        for (int i = 3; i < len; i++) {
            if (first <= noduplicates[i]) {
                first = noduplicates[i];
                change++;
            }
            if (change > 0) {
                if (second <= vfirst) {
                    second = vfirst;
                    change++;
                }

                change--;
            }
            if (first > noduplicates[i] && second <= noduplicates[i]) {
                change++;
                second = noduplicates[i];

            }
            if (change > 0) {
                if (third <= vsecond) {
                    third = vsecond;

                }

                change--;
            }
            if (second > noduplicates[i] && third <= noduplicates[i])
                third = noduplicates[i];

            vfirst = first;
            vsecond = second;
            vthird = third;
        }

        return third;
    }

    vector<int> removeDuplicates(vector<int> nums) {
        int len = nums.size();
        vector<int> rs;
        rs.push_back(nums[0]);
        for (int i = 1; i < len; i++) {
            int count = 0;
            for (int j = 0; j < i; j++) {
                if (nums[i] == nums[j])
                    break;
                count++;
            }
            if (count == i)
                rs.push_back(nums[i]);
        }
        return rs;
    }
};


#endif //LEETCODE_THIRDMAXIMUMNUMBER_H
