//
// Created by 韩正博 on 18/4/4.
//
#include <cstdio>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        int sum ;
        while(b!=0){
            sum = a^b;
            b=(a&b)<<1;
            a=sum;

        }
        return sum;
    }
};
