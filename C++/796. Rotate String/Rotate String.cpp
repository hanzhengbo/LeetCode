//
// Created by 韩正博 on 18/4/17.
//
#include "../header.h"

class Solution {
public:
    bool rotateString(string A, string B) {
        int rotatenum = 0;
        int lenA = A.length();
        int lenB = B.length();
        if (lenA != lenB)
            return false;
        if (A.compare("") == 0)
            return true;
        for (int i = 0; i < lenA; i++) {
            if (A[0] != B[i])
                continue;
            rotatenum = i - 0;
            string rotateA = rotate(A, rotatenum);

            if (rotateA.compare(B) == 0)
                return true;
        }

        return false;
    }

    string rotate(string &str, int num) {
        string result;
        int len = str.length();
        for (int i = 0; i < len; i++) {
            int j = i;
            if (j + num >= len)
                j = j + num - len;
            result.insert(j, 1, str[i]);
        }
        return result;
    }
};
//
//int main(void){
//    string A = "abcde";
//    string B = "abced";
//    Solution *solution = new Solution();
//
//    bool res = solution->rotateString(A,B);
//    printf("%d",res);
//    return 0;
//}
