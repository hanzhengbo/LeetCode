//
// Created by 韩正博 on 18/4/10.
//

#ifndef LEETCODE_HAPPYNUMBER_H
#define LEETCODE_HAPPYNUMBER_H

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        vector<int> visit;
        for (int i = 0; i <= 10000; i++) {
            visit.push_back(0);
        }
        while (n != 1) {
            vector<int> temp;
            while (n != 0) {
                int remainder = n % 10;
                temp.push_back(remainder);
                n = n / 10;
            }
            int len = temp.size();
            int sum = 0;
            for (int i = 0; i < len; i++) {
                sum += pow(temp[i], 2);
            }
            visit[sum]++;
            if (visit[sum] > 1)
                return false;
            n = sum;
            // printf("%d\n",sum);
            if (sum == num)
                return false;
        }
        return true;
    }
};


#endif //LEETCODE_HAPPYNUMBER_H
