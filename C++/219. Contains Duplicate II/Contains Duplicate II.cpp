//
// Created by 韩正博 on 18/4/4.
//

#include <vector>
#include <map>
#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        map<int, int> map1;
        vector<pair<int, int>> arr;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            map1.insert(make_pair(i, nums[i]));
        }
        for (map<int, int>::iterator it = map1.begin(); it != map1.end(); ++it) {
            arr.push_back(make_pair(it->first, it->second));
        }

        sort(arr.begin(), arr.end(), cmp);

        for (vector<pair<int, int> >::iterator it = arr.begin(); it != arr.end(); ++it) {
            if (it->second == (it + 1)->second) {
                int length = abs((it->first) - ((it + 1)->first));
                if (length <= k)
                    return true;
            }
        }
        return false;
    }

    static bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)//要用常数，不然编译错误
    {
        return p1.second > p2.second;
    }

};

