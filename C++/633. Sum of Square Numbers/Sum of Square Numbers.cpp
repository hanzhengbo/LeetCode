//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    bool judgeSquareSum(int c) {
        int sqrtc = sqrt(c);
        for (int i = 0; i <= sqrtc; i++) {
            int sqrta = sqrt(c - i * i);
            for (int j = 0; j <= sqrta; j++) {
                if (i * i + sqrta * sqrta < c)
                    break;

                if (i * i + j * j == c)
                    return true;
            }
        }
        return false;
    }
};
