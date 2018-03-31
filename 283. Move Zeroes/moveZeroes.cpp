//
// Created by 韩正博 on 18/3/31.
//

#include "moveZeroes.h"

int main(void){
    vector<int> vector1;
    vector1.push_back(0);
    vector1.push_back(0);
    vector1.push_back(1);
    vector1.push_back(3);
    vector1.push_back(12);
    Solution *solution = new Solution();
    solution->moveZeroes(vector1);
    for(int i = 0 ; i < vector1.size();i++){
        printf("%d\n",vector1[i]);
    }
    return  0;
}