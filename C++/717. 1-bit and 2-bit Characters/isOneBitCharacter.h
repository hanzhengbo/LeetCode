//
// Created by 韩正博 on 18/3/30.
//

#ifndef EXERCISE2_ISONEBITCHARACTER_H
#define EXERCISE2_ISONEBITCHARACTER_H

#include <vector>
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int length = bits.size();
        int count = 0;

        while(count<length-1){
            if(bits[count]){
                count+=2;
                continue;
            }
            else{
                count++;
            }

        }

        if(count == length)
            return false;
        else
            return  true;
    }
};


#endif //EXERCISE2_ISONEBITCHARACTER_H
