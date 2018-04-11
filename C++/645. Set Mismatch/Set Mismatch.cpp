//
// Created by 韩正博 on 18/4/4.
//

#include <cstdio>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        vector<int> error ;
        vector<int> result;
        for(int i = 0 ; i <=len;i++)
            error.push_back(2);
        for(int i = 0 ; i < len ; i++)
            error[nums[i]]--;
        for(int i = 1 ; i <=len ; i++)
            if(error[i] == 0)
                result.push_back(i);
        for(int i = 1 ; i <=len ; i ++)
            if(error[i] == 2)
                result.push_back(i);
        return result;
    }
};
