//
// Created by 韩正博 on 18/5/7.
//
#include "../header.h"

class Solution {
public:
    int wiggleMaxLength(vector<int> &nums) {
        static const int BEGIN_STATE = 0;
        static const int UP_STATE = 1;
        static const int DOWN_STATE = 2;
        int STATE = BEGIN_STATE;
        int len = nums.size();
        if (len == 0)
            return 0;
        int maxlen = 1;
        for (int i = 1; i < len; i++) {
            switch (STATE) {
                case BEGIN_STATE:
                    if (nums[i] > nums[i - 1]) {
                        STATE = UP_STATE;
                        maxlen++;
                    } else if (nums[i] < nums[i - 1]) {
                        STATE = DOWN_STATE;
                        maxlen++;
                    }
                    break;
                case UP_STATE:
                    if (nums[i] < nums[i - 1]) {
                        STATE = DOWN_STATE;
                        maxlen++;
                    }
                    break;
                case DOWN_STATE:
                    if (nums[i] > nums[i - 1]) {
                        STATE = UP_STATE;
                        maxlen++;
                    }
            }
        }
        return maxlen;
    }
};