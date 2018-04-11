//
// Created by 韩正博 on 18/4/11.
//

#ifndef LEETCODE_ADDDIGITS_H
#define LEETCODE_ADDDIGITS_H


class Solution {
public:
    int addDigits(int num) {
        while(num / 10 !=0){
            int digitssum = 0;
            while(num != 0){
                digitssum+=num%10;
                num = num/10;
            }
            num = digitssum;
        }
        return num;
    }
};


#endif //LEETCODE_ADDDIGITS_H
