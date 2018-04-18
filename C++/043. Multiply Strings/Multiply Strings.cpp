//
// Created by 韩正博 on 18/4/18.
//
#include "../header.h"

class Solution {
public:
    string multiply(string num1, string num2) {
//        long long int number1 = mystoi(num1);
//        long long int number2 = mystoi(num2);
//        long long int resultnum = number1 * number2;
//        string result = myitos(resultnum);
//        return result;
        int m = num1.length();
        int n = num2.length();
        vector<int> results;
        //初始化vector
        for (int i = 0; i < m + n; i++) {
            results.push_back(0);
        }

        for (int i = 0; i < m; i++) {
            int v1 = num1[m - 1 - i] - '0';//将num1字符串中每一个数字变成整型
            //用num1中的一位数字去和num2相乘，不考虑进位
            for (int j = 0; j < n; j++) {
                int v2 = num2[n - 1 - j] - '0';
                results[i + j] += v1 * v2;
            }
        }

        int carry = 0;
        //考虑进位后重新对每一位数字进行计算
        for (int i = 0; i < m + n; i++) {
            int value = results[i] + carry;
            results[i] = value % 10;
            carry = value / 10;
        }

        string re = "";
        bool findNoZero = false;
        for (int i = m + n - 1; i >= 0; i--) {
            if (findNoZero) {
                re += (results[i] + '0');//转化为字符串类型后进行相加，类似append
            } else {
                if (results[i] != 0) {
                    findNoZero = true;
                    re += (results[i] + '0');
                }
            }
        }

        if (re == "")
            re = "0";
        return re;
    }

    long long int mystoi(string x) {
        int len = x.size();
        long long int result = 0;
        for (int i = 0; i < len; i++) {
            result = result * 10 + x[i] - '0';
        }
        return result;
    }

    string myitos(long long int x) {
        vector<char> v;
        string result;
        if (x == 0) {
            result.insert(0, 1, char(x + '0'));
            return result;
        }

        long long int temp = x;
        int digits = 0;
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
        v.reserve(digits);
        for (int i = 0; i < digits; i++) {
            int remainder = x % 10;
            char charremainder = char(remainder + '0');
            x = x / 10;
            v.push_back(charremainder);
            //result.insert(digits-1-i,1,charremainder);
        }
        for (int i = 0; i < digits; i++) {
            result.insert(i, 1, v[digits - 1 - i]);
        }
        return result;
    }
};

int main(void) {
    Solution *solution = new Solution();
    cout<<solution->multiply("12343242423423424", "4564353645635522")<<endl;
    return 0;
}

