//
// Created by 韩正博 on 18/5/9.
//
#include "../header.h"

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> res;
        vector<int> temp;
        int len = S.size();
        int count = 1;
        temp.push_back(0);
        for (int i = 1; i < len; i++) {
            if (S[i] == S[i - 1]) {
                count++;
                if (i == len - 1 && count >= 3) {
                    temp.push_back(i);
                    res.push_back(temp);
                }
                continue;
            }

            if (S[i] != S[i - 1]) {
                if (count < 3) {
                    temp.clear();
                    temp.push_back(i);
                    count = 1;
                }
                if (count >= 3) {
                    temp.push_back(i - 1);
                    res.push_back(temp);
                    count = 1;
                    temp.clear();
                    temp.push_back(i);
                }
            }
        }
        return res;
    }
};
