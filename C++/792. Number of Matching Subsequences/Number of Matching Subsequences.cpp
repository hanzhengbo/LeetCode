//
// Created by 韩正博 on 18/4/23.
//

#include "../header.h"

class Solution {
public:
    int numMatchingSubseq(string S, vector<string> &words) {
        int slen = S.size();
        if (slen == 0)
            return 0;
        int vlen = words.size();
        int result = 0;
        int time = 1;//vector中元素重复的个数（应对第42个测试用例）
        for (int i = 0; i < vlen; i++) {
            if (words[i] == words[i + 1]) {
                time++;
                continue;
            }
            int wordlen = words[i].size();
            int j = 0;
            int k = 0;
            while (j < wordlen) {
                if (S[k] == words[i][j]) {
                    j++;
                }
                if (k == slen - 1 && j < wordlen)
                    break;
                if (j == wordlen) {
                    result += time;
                    time = 1;
                    break;
                }
                k++;
            }
        }
        return result;
    }
};