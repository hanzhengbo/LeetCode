//
// Created by 韩正博 on 18/4/4.
//

#include <cstdio>
#include <string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int Jlen = J.size();
        int Slen = S.size();
        int count = 0;

        for(int i = 0 ; i < Jlen ; i ++){
            for(int j = 0 ; j < Slen ; j++){
                if(J[i] == S[j])
                    count++;
            }
        }
        return count;
    }
};
