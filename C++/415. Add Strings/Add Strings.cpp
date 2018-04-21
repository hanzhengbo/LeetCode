//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    string addStrings(string num1, string num2) {
        int lennum1 = num1.size();
        int lennum2 = num2.size();
        int len = max(lennum1, lennum2) + 1;
        vector<int> add;
        int carry = 0;
        for (int i = 0; i <= len; i++) {
            if (i < lennum1 && i < lennum2) {
                int temp = num1[lennum1 - i - 1] + num2[lennum2 - i - 1] - '0' - '0' + carry;
                carry = temp / 10;
                int remainder = temp % 10;
                add.push_back(remainder);
                continue;
            }
            if (i >= lennum1 && i < lennum2) {
                int temp = num2[lennum2 - i - 1] - '0' + carry;
                carry = temp / 10;
                int remainder = temp % 10;
                add.push_back(remainder);
                continue;
            }
            if (i < lennum1 && i >= lennum2) {
                int temp = num1[lennum1 - i - 1] - '0' + carry;
                carry = temp / 10;
                int remainder = temp % 10;
                add.push_back(remainder);
                continue;
            }
            if (i >= lennum1 && i >= lennum2) {
                add.push_back(carry);
                carry = carry / 10;
            }
        }
        if (carry > 0) {
            vector<int> result;
            result.push_back(1);
            for (int i = 0; i < add.size(); i++) {
                result.push_back(add[add.size() - i - 1]);
            }
            string re = "";
            bool findNoZero = false;
            for (int i = 0; i < len; i++) {
                if (findNoZero) {
                    re += (result[i] + '0');//转化为字符串类型后进行相加，类似append
                } else {
                    if (result[i] != 0) {
                        findNoZero = true;
                        re += (result[i] + '0');
                    }
                }
            }
            if (re == "")
                re = "0";
            return re;
        }

        string re = "";
        bool findNoZero = false;
        for (int i = len - 1; i >= 0; i--) {
            if (findNoZero) {
                re += (add[i] + '0');//转化为字符串类型后进行相加，类似append
            } else {
                if (add[i] != 0) {
                    findNoZero = true;
                    re += (add[i] + '0');
                }
            }
        }
        if (re == "")
            re = "0";
        return re;
    }
};

