//
// Created by 韩正博 on 18/4/4.
//

#include <cstdio>
#include <vector>
using  namespace std;
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int max = INT8_MIN;
        int len = nums.size();

        vector<int> v;
        for(int i = 0 ; i <nums.size();i++)
            v.push_back(0);

        for(int i = 0 ; i < len ; i ++){
            int index = i;
            int start = index;
            if(v[index])
                continue;
            int count = 1;
            while(nums[index]!= start){
                index = nums[index];
                v[index]++;
                count++;
            }
            if(count>max)
                max = count;
        }
        return max;
    }
};