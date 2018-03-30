//
// Created by 韩正博 on 18/3/30.
//
int searchInsert(int* nums, int numsSize, int target) {
    int result=0;
    for(int i = 0;i < numsSize;i ++){
        if(nums[i]==target)
            return i;
    }
    if(nums[0]<nums[numsSize-1]){
        if(target<nums[0])
            return 0;
        if(target>nums[numsSize-1])
            return numsSize;
        for(int i = 0 ; i<numsSize;i++){
            if(nums[i]<target&&nums[i+1]>target)
                return i+1;
        }
    }
    if(nums[0]>nums[numsSize-1]){
        if(target>nums[0])
            return 0;
        if(target<nums[numsSize-1])
            return numsSize;
        for(int i = 0 ; i<numsSize;i++){
            if(nums[i]>target&&nums[i+1]<target)
                return i+1;
        }
    }
    if(numsSize==1){
        if(target<nums[0])
            return 0;
        else
            return 1;
    }
    return 0;
}
