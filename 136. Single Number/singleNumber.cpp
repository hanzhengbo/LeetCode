//
// Created by 韩正博 on 18/4/3.
//

#include "singleNumber.h"

int main(void){
    vector<int> vector1;
    vector1.push_back(16);
    vector1.push_back(12);
    vector1.push_back(5);
    vector1.push_back(-6);
    vector1.push_back(12);
    vector1.push_back(4);
    vector1.push_back(-6);
    vector1.push_back(-5);
    vector1.push_back(2);
    vector1.push_back(-3);
    vector1.push_back(2);
    vector1.push_back(4);
    vector1.push_back(5);
    vector1.push_back(16);
    vector1.push_back(-3);
    vector1.push_back(-4);
    vector1.push_back(15);
    vector1.push_back(15);
    vector1.push_back(-4);
    vector1.push_back(-5);
    vector1.push_back(17);
    //[17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6]

    Solution *solution = new Solution();
    int result = solution->singleNumber(vector1);
    printf("%d\n",result);
    return 0;
}
