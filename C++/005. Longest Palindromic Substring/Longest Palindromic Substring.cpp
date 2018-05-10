//
// Created by 韩正博 on 18/5/9.
//
#include "../header.h"

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len == 0 || len == 1)
            return s;
        string res = "";
        for (int i = 0; i < len; i++) {
            int left = i;
            int right = i;
            while (left > 0 && right < len - 1 && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }
            if ((right - left + 1) > res.size())
                res = s.substr(left, right - left + 1);
        }
        for (int i = 0; i < len - 1; i++) {
            if (s[i] != s[i + 1])
                continue;
            int left = i;
            int right = i + 1;
            while (left > 0 && right < len - 1 && s[left - 1] == s[right + 1]) {
                left--;
                right++;
            }
            if ((right - left + 1) > res.size())
                res = s.substr(left, right - left + 1);
        }
        return res;
    }
};
