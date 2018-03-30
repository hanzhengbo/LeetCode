//
// Created by 韩正博 on 18/3/30.
//

#include <iostream>
#include <vector>
#include <limits>
#include <math.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = int(s.length());
        int true_length = length;
        int size = 0;
        int index = 0;

        // 清除所有的无效空格。
        for (int i = length - 1; i >= 0; i--) {
            if (' ' == s[i]) {
                true_length--;
            } else {
                break;
            }
        }

        printf("true_length = %d\n", true_length);

        // 记录单词字符数。
        for (int i = true_length - 1; i >= 0; i--) {
            if (' ' != s[i]) {
                size++;
            } else {
                break;
            }
        }
        return size;
    }
};