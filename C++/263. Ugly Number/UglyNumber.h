//
// Created by 韩正博 on 18/4/10.
//

#ifndef LEETCODE_UGLYNUMBER_H
#define LEETCODE_UGLYNUMBER_H

#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isUgly(int num) {
        if(num == 1)
            return true;
        if(num == 3)
            return true;
        if(num == 5)
            return true;
        if(num == 2)
            return true;

        if(isPrime(num))
            return false;
        double dnum = (double)num;
        while(dnum/2 == num/2 ){
            dnum = dnum/2;
            num = num/2;
        }
        if(num == 1)
            return true;
        while(dnum/3 == num/3 ){
            dnum = dnum/3;
            num = num/3;
        }
        if(num == 1)
            return true;
        while(dnum/5 == num/5 ){
            dnum = dnum/5;
            num = num/5;
        }
        if(num == 1)
            return true;
        return false;
    }
    bool isPrime(int number){
        int sqrtnumber = (int)sqrt(number);
        for(int i = 2 ; i<=sqrtnumber ; i++){
            if(number % i == 0)
                return false;
        }
        return true;
    }
};


#endif //LEETCODE_UGLYNUMBER_H
