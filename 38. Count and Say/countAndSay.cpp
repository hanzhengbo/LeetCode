//
// Created by 韩正博 on 18/3/30.
//

#include <cstring>
#include <string>

using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n==0)
            return "";
        string result = "1";
        while(n>1){
            string temp="";
            int len = result.size();
            for(int i = 0 ; i<len;i++){
                int count = 1;
                while((result[i] == result[i+1])&&(i+1)<len){
                    i++;
                    count++;
                }
                temp+=to_string(count) + result[i];
            }
            result = temp;
            n--;
        }
        return result;
    }
};