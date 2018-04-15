//
// Created by 韩正博 on 18/4/15.
//
#include "../header.h"
class Solution {
public:
    bool checkRecord(string s) {
        if(s == "")
            return true;
        int len = s.length();
        int Acount = 0;
        for(int i = 0 ; i < len ; i++){
            if(s[i] == 'A')
                Acount++;
            if(i<=len-3){
                if(s[i] == 'L' &&s[i+1] == 'L' && s[i+2] == 'L')
                    return false;
            }

            if(Acount>1)
                return false;
        }
        return true;
    }
};
