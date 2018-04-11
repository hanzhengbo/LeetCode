//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_SELFDIVIDINGNUMBERS_H
#define LEETCODE_SELFDIVIDINGNUMBERS_H

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left ; i <=right ; i ++){
            int numberi = i;
            int numberii = i;
            if(i/10 == 0){
                result.push_back(i);
                continue;
            }

            vector<int> temp;
            int digits = 0;
            while(numberi!=0){
                int number = numberi%10;
                if(number == 0)
                    break;
                temp.push_back(number);
                digits++;
                numberi = numberi/10;
            }
            if(numberi !=0)
                continue;
            int tempdigits = digits;
            int count = 0;
            while(tempdigits > 0){
                if(numberii%(temp[tempdigits-1]) == 0){
                    count ++;
                    tempdigits--;
                    continue;
                }
                tempdigits --;
            }
            if(count == digits)
                result.push_back(i);
        }
        return result;
    }
};


#endif //LEETCODE_SELFDIVIDINGNUMBERS_H
