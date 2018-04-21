//
// Created by 韩正博 on 18/4/21.
//
#include "../header.h"
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!= 0){
            n = n&(n-1);
            count++;
        }
        return count;
    }
};
