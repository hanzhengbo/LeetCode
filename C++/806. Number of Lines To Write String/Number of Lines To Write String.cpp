//
// Created by 韩正博 on 18/4/16.
//

#include "../header.h"

class Solution {
public:
    vector<int> numberOfLines(vector<int> &widths, string S) {
        int len = S.length();
        int lines = 1;
        int units = 0;
        vector<int> result;

        for (int i = 0; i < len; i++) {
            int num = (int) S[i] - 'a';
            units += widths[num];

            if (units > 100) {
                int temp = units;
                units -= widths[num];
                lines++;
                units = temp - units;
            }
        }
        result.push_back(lines);
        result.push_back(units);
        return result;
    }
};