//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    bool isPerfectSquare(int num) {
        /**
         * 使用sqrt的方法
         */

        /**
         return (int)sqrt(num) == sqrt(num);
         */

        /**
         * 不使用sqrt的方法。
         */

        int i = 1;
        while (num > 0) {
            num -= i;
            i += 2;
        }
        return num == 0;
    }
};
