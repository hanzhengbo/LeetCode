//
// Created by 韩正博 on 18/4/2.
//

#include "topKFrequentElements.h"

int main(void){
    vector<int> vector1 ;
    vector1.push_back(-1);
    vector1.push_back(-1);
//    vector1.push_back(-1);
//    vector1.push_back(-1);
//    vector1.push_back(-2);
//    vector1.push_back(-2);
//    vector1.push_back(3);
//    vector1.push_back(3);
//    vector1.push_back(5);
//    vector1.push_back(5);
//    vector1.push_back(5);

    Solution *solution = new Solution();
    vector<int> result =solution->topKFrequent(vector1,1);

    for(int i = 0 ; i < result.size();i++){
        printf("%d\n",result[i]);
    }
    return 0;
}
