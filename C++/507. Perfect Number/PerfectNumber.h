//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_PERFECTNUMBER_H
#define LEETCODE_PERFECTNUMBER_H

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num < 2)
            return false;
        vector<int> result = Prime(num);
        int len = result.size();
        int sum = 0;
        for (int i = 0; i < len; i++)
            sum += result[i];
        if (sum == num)
            return true;
        return false;
    }

    vector<int> Prime(int num) {
        vector<int> result;

        int sqrtnum = (int) sqrt(num);
        int halfnum = num / 2;

        for (int i = 1; i <= sqrtnum; i++) {
            if (num % i == 0) {
                result.push_back(i);
                if (num / i != num) {
                    result.push_back(num / i);
                }
            }
        }
        return result;
    }
};


#endif //LEETCODE_PERFECTNUMBER_H
