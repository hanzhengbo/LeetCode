//
// Created by 韩正博 on 18/4/4.
//

#include <iostream>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        if(nums.size() < 2) return false;
        vector<pair<long, int>> value;
        for (int i = 0; i < nums.size(); ++i)
            value.push_back(pair<long, int>(nums[i], i));
        sort(value.begin(), value.end());
        for (int i = nums.size() - 1; i >= 1; --i)
        {
            for (int j = i - 1; j >= 0; --j)
            {
                if (value[i].first - value[j].first > t) break;
                else if (abs(value[i].second - value[j].second) <= k) return true;
                else continue;
            }
        }
        return false;
    }
};