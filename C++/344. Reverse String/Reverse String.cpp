//
// Created by 韩正博 on 18/4/15.
//

#include "../header.h"
class Solution {
public:
    string reverseString(string s) {
        if(s.length() == 1)
            return s;
        string result;

        int len = s.length();
        for(int i = 0 ; i < len ; i++){
            result.append(1,s[len-i-1]);
        }
        return result;
    }
};