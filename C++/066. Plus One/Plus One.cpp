//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int len = digits.size();
        digits[len - 1]++;
        vector<int> single;
        if (len == 1) {
            if (digits[0] == 10) {
                single.push_back(1);
                single.push_back(0);
                return single;
            }
            return digits;
        }
        int count = 0;
        for (int i = 1; i < len; i++) {
            if (digits[len - i] == 10) {
                digits[len - 1 - i]++;
                digits[len - i] = 0;
                count++;
                if (digits[len - 1 - i] == 10)
                    continue;
            }
            return digits;
        }
        if (count == (len - 1)) {
            vector<int> res;
            res.push_back(1);
            for (int i = 0; i < len; i++)
                res.push_back(0);
            return res;
        }
        return single;
    }
};

