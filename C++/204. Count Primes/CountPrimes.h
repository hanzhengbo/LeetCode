//
// Created by 韩正博 on 18/4/10.
//

#ifndef LEETCODE_COUNTPRIMES_H
#define LEETCODE_COUNTPRIMES_H


#include <iostream>
#include <cmath>

using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;

        int count = 1;
        for(int i = 3 ; i < n  ; i = i+2){
            if(isPrime(i))
                count++;
        }
        return count;
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


#endif //LEETCODE_COUNTPRIMES_H
