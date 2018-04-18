//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        if (len == 0)
            return true;
        if (len == 1 && word[0] != ' ')
            return true;

        if (word[0] >= 'A' && word[0] <= 'Z') {
            int Capitalcount = 1;
            int Wordcount = 0;
            for (int i = 1; i < len; i++) {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    Capitalcount++;
                if (word[i] >= 'a' && word[i] <= 'z')
                    Wordcount++;
            }
            if (Wordcount == (len - 1) || Capitalcount == len)
                return true;
        }
        if (word[0] >= 'a' && word[0] <= 'z') {
            int Wordcount = 1;
            for (int i = 1; i < len; i++) {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    break;
                Wordcount++;
            }
            if (Wordcount == len)
                return true;
        }
        return false;
    }
};
