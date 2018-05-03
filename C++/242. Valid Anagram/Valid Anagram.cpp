//
// Created by 韩正博 on 18/5/3.
//
#include "../header.h"

class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        if (slen != tlen)
            return false;

        unordered_map<char, int> map1;
        for (int i = 0; i < slen; i++) {
            map1[s[i]]++;
        }
        for (int i = 0; i < tlen; i++) {
            map1[t[i]]--;
        }
        for (auto map : map1) {
            if (map.second)
                return false;
        }
        return true;
    }
};
