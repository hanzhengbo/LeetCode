//
// Created by 韩正博 on 18/4/22.
//

#include "../header.h"

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        int i = 0;
        int j = 0;
        if (tlen == 1) {
            if (s[0] == t[0])
                return true;
            else
                return false;
        }
        if (tlen < slen)
            return false;
        while (i < slen) {
            if (s[i] == t[j]) {
                i++;
            }
            if (j == (tlen - 1) && i < slen) {
                return false;
            }
            j++;

        }
        return true;
    }
};