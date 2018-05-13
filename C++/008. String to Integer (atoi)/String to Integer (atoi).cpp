//
// Created by 韩正博 on 18/5/4.
//
#include "../header.h"

static int x = []() {
    // toggle off cout & cin, instead, use printf & scanf
    std::ios::sync_with_stdio(false);
    // untie cin & cout
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int myAtoi(string str) {
        int len = str.size();
        if (len == 0)
            return 0;
        string nospacestr;
        int count = 0;
        int lastindex = -1;
        for (int i = 0; i < len; i++) {//去掉空格
            if (str[i] != ' ') {
                if (lastindex != i - 1 && (str[lastindex] == '-' || str[lastindex] == '+') && str[i] <= '9' &&
                    str[i] >= '0')
                    return 0;
                if (lastindex != i - 1 && (str[lastindex] <= '9' && str[lastindex] >= '0') && str[i] <= '9' &&
                    str[i] >= '0')
                    break;
                lastindex = i;
                int nowindex = i;//第一个非空格，若下一个元素还是空格返回0
                nospacestr.insert(count, 1, str[i]);
                count++;
            }
        }
        if (!((nospacestr[0] >= '0' && nospacestr[0] <= '9') || nospacestr[0] == '-' || nospacestr[0] == '+'))
            return 0;
        len = nospacestr.size();
        int i = 0;
        vector<char> res;
        if (nospacestr[0] == '-') {
            if (len == 1)
                return 0;
            res.push_back(nospacestr[0]);
            i++;
        }
        if (nospacestr[0] == '+') {
            if (len == 1)
                return 0;
            i++;
        }
        int isnumber = 0;
        while (i < len && nospacestr[i] >= '0' && nospacestr[i] <= '9') {
            if (nospacestr[i] >= '0' && nospacestr[i] <= '9')
                isnumber++;
            res.push_back(nospacestr[i]);
            i++;
        }
        if (isnumber == 0)
            return 0;

        int reslen = res.size();
        long num = 0;
        if (res[0] == '-') {
            int i = 1;
            while (i < reslen) {
                num = num * 10 + res[i] - '0';
                i++;
                if (num > INT32_MAX)
                    return INT32_MIN;
            }
            num = -num;
        } else {
            int i = 0;
            while (i < reslen) {
                num = num * 10 + res[i] - '0';
                i++;
                if (num > INT32_MAX)
                    return INT32_MAX;
            }
        }
        return (int) num;
    }
};

