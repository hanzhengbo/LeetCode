//
// Created by 韩正博 on 18/3/30.
//

int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    if(numsSize==0)
        nums={};
    for(int i = 0 ; i < numsSize; i++){
        for(int j = 0 ; j<=i;j++){
            if(i==0){
                nums[k]=nums[0];
                k++;
                break;
            }
            if(nums[i]==nums[j]){
                break;
            }
            if(j==(i-1)){
                nums[k]=nums[i];
                k++;
            }
        }
    }
    return k;
}

