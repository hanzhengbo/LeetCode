//
// Created by 韩正博 on 18/4/16.
//

#include "../header.h"

class Solution {
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration) {
        int result = 0;
        int len = timeSeries.size();
        if (len == 0)
            return 0;
        for (int i = 0; i < len - 1; i++) {
            if (timeSeries[i + 1] - timeSeries[i] >= duration)
                result += duration;
            else
                result += timeSeries[i + 1] - timeSeries[i];
        }
        result += duration;
        return result;
    }
};