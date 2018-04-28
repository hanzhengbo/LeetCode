//
// Created by 韩正博 on 18/4/28.
//
#include "../header.h"

class Solution {
public:
    int climbStairs(int n) {
        /**
         * 递归算法，但是超时了
         * int res = 0;
        if(n == 1)
            return 1;
        if(n == 0)
            return 1;
        res+=climbStairs(n-1)+climbStairs(n-2);
        return res;
         */

        if (n == 1)
            return 1;
        if (n == 0)
            return 1;
        int a = 1;
        int b = 1;
        int i = 2;
        while (i <= n) {
            int temp = a;
            a = b;
            b = temp + b;
            i++;
        }
        return b;
    }
};
