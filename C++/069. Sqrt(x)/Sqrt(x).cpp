//
// Created by 韩正博 on 18/4/19.
//
#include "../header.h"
class Solution {
public:
    int mySqrt(int x) {
        /**
         * 使用sqrt
         */
        /*return (int)sqrt(x);*/

            long r = x ;
            long a = x ;
            while(r * r > a) {
                r = (r + a / r) / 2;
            }
            return r;
        }
    
};
