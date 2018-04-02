//
// Created by 韩正博 on 18/4/2.
//

#include "thirdMaximumNumber.h"
int main(void){
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(5);
    vector1.push_back(6);

    Solution *solution = new Solution();
    vector<int> rs = solution->removeDuplicates(vector1);

    for(int i = 0 ; i < rs.size();i++){
        printf("%d\n",rs[i]);
    }

    int re = solution->thirdMax(vector1);
    printf("%d\n",re);
    return 0;
}