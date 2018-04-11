//
// Created by 韩正博 on 18/4/11.
//
#include "../header.h"
class Solution {
public:
    int nthUglyNumberDivide(int n) {
        int count = 0;
        for(int i = 1 ; count <=n ; i++){
            if(isUgly(i))
                count++;
            if(count == n)
                return i;
        }
    }
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        int index_2 = 0, index_3 = 0, index_5 = 0;
        int val_2 = 2, val_3 = 3, val_5 = 5;
        int i = 1;
        dp[0] = 1;
        for(;i < n;i++){
            int val = min(val_2, min(val_3, val_5) );
            if(val == val_2) {dp[i] = val_2; index_2++; val_2 = dp[index_2] * 2;}
            if(val == val_3) {dp[i] = val_3; index_3++; val_3 = dp[index_3] * 3;}
            if(val == val_5) {dp[i] = val_5; index_5++; val_5 = dp[index_5] * 5;}
        }
        return dp[n - 1];
    }
    bool isUgly(int num) {
        if(num <=5){
            if(num == 1)
                return true;
            if(num == 3)
                return true;
            if(num == 5)
                return true;
            if(num == 2)
                return true;
        }
//        if(isPrime(num))
//            return false;
        if(num % 2 == 0)
            return false;
        if(num % 3 == 0)
            return false;
        if(num % 5 == 0)
            return false;
        double dnum = (double)num;
        while(dnum/5 == num/5 ){
            dnum = dnum/5;
            num = num/5;
        }

        if(num == 1)
            return true;
        while(dnum/3 == num/3 ){
            dnum = dnum/3;
            num = num/3;
        }
        if(num == 1)
            return true;
        while(dnum/2 == num/2 ){
            dnum = dnum/2;
            num = num/2;
        }
        if(num == 1)
            return true;
        return false;
    }
    bool isPrime(int number){
        int sqrtnumber = (int)sqrt(number);
        if(number % 2 == 0)
            return false;
        if(number % 3 == 0)
            return false;
        if(number % 5 == 0)
            return false;
        for(int i = 3 ; i<=sqrtnumber ; i = i+2){
            if(number % i == 0)
                return false;
        }
        return true;
    }
};

