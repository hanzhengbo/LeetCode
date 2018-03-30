#include <cstring>

//
// Created by 韩正博 on 18/3/30.
//
int lengthOfLongestSubstring(char* s) {
    int max = 0;
    int head = 0;
    int trail = 0;
    int len = strlen(s);
    for(int i = 0; i < len;i++ ){
        for(int j = head ;j<trail;j++){
            if (s[j] == s[i])
            {
                if(trail - head >max){
                    max = trail - head;
                }
                head = j+1;
            }
        }
        trail++;

    }
    return max>(trail-head)?max:(trail-head);
}
