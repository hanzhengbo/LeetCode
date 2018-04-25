//
// Created by 韩正博 on 18/4/25.
//

#include "../header.h"
class Solution {
public:
    vector<int> countBits(int num) {
        /**
         * DP做法
         *
         * vector<int> res;
        res.push_back(0);
        int offset = 1;
        for(int i = 1 ; i <=num ; i++){
            if(i == (offset*2))
                offset*=2;
            res.push_back(res[i-offset]+1);
        }
        return res;
         */

        /**
         * 位运算做法
         */
        vector<int> res;
        res.push_back(0);
        for(int i = 1 ; i <=num ; i ++){
            int temp = i;
            int count = 0;
            while(temp!=0){
                count++;
                temp = temp&(temp-1);
            }
            res.push_back(count);
        }
        return res;
    }
};