//
// Created by 韩正博 on 18/4/1.
//

#include "subarraySumEqualsK.h"

int main(void){
    vector<int> vector1;
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(0);

    Solution *solution = new Solution();
    int res = solution->subarraySum(vector1,0);

    printf("%d\n",res);
    return 0;
}
