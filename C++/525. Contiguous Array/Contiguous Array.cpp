//
// Created by 韩正博 on 18/5/16.
//
#include "../header.h"

class Solution {
public:
    int findMaxLength(vector<int> &nums) {
        int result = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] == 0) nums[i] = -1;
        map<int, int> m;
        m[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (m.find(sum) != m.end())
                result = max(result, i - m[sum]);
            else
                m[sum] = i;
        }
        return result;
    }
};

int main(void) {
    Solution *solution = new Solution();
    vector<int> v{0, 1, 1, 0, 1, 1, 1, 0};
    cout << solution->findMaxLength(v) << endl;
    return 0;
}