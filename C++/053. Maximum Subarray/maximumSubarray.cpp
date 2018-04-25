//
// Created by 韩正博 on 18/3/30.
//

#include <climits>

int maxSubArray(int* nums, int size)
{
    /**
     * DP方法1
     * int sum = 0;
    int max = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(sum >= 0)
            sum += nums[i];
        else
            sum = nums[i];
        if(sum > max)
            max = sum;
    }
    return max;
     */

    /**
     * DP方法2
     */

    int vmax = INT_MIN;
    int dp[nums.size()];
    dp[0] = nums[0];
    vmax = nums[0];
    for(int i = 1 ; i < nums.size() ; i++){
        dp[i] = nums[i]+(dp[i-1]>0 ? dp[i-1]: 0 );
        vmax = max(vmax , dp[i]);
    }
    return vmax;
}