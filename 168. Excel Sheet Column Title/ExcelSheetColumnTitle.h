//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_EXCELSHEETCOLUMNTITLE_H
#define LEETCODE_EXCELSHEETCOLUMNTITLE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        string result;
        vector<int> number;
        while(n != 0){
            int temp = n%26 + 64;
            if(temp ==64){
                temp = 90;
            }

            number.push_back(temp);
            n = n/26;
            if(temp == 90)
                n--;
        }
        int len = number.size();

        for(int i = 0 ; i < len ; i ++){
            result[len-1-i] = (char)number[i];
        }
        return result;
    }
};


#endif //LEETCODE_EXCELSHEETCOLUMNTITLE_H
