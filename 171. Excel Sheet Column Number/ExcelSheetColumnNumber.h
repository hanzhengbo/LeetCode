//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_EXCELSHEETCOLUMNNUMBER_H
#define LEETCODE_EXCELSHEETCOLUMNNUMBER_H


#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int i = 0 ;
        int len = s.size();
        vector<int> number;
        while(s[len-i-1] !='\0'){
            int temp = (int)s[len-i-1] - 64;
            number.push_back(temp);
            i++;
        }
        int numberlen = number.size();
        int result = 0;
        for(int i = 0 ; i < numberlen ; i ++){
            result+=number[i]* pow(26.0,i);
        }
        return result;
    }
};


#endif //LEETCODE_EXCELSHEETCOLUMNNUMBER_H
