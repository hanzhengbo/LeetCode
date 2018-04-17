//
// Created by 韩正博 on 18/4/17.
//
#include "../header.h"

class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        int len = flowerbed.size();
        int zeros = 0;
        int firstzero = 0;
        int result = 0;
        if (len == 1 && flowerbed[0] == 0)
            result = 1;
        if (len == 1 && flowerbed[0] == 1)
            result = 0;
        if (flowerbed[0] == 0) {
            zeros += 2;
        }
        for (int i = 1; i < len; i++) {

            if (flowerbed[i] == 1) {
                result += (zeros - 1) / 2;
                zeros = 0;
                continue;
            }
            zeros++;
            if (i == (len - 1) && flowerbed[len - 1] == 0) {
                zeros++;
            }
            if (i == (len - 1))
                result += (zeros - 1) / 2;
        }

        if (result >= n)
            return true;
        return false;
    }
};

int main(void) {
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    Solution *solution = new Solution();
    bool res = solution->canPlaceFlowers(v, 2);
    printf("%d", res);
    return 0;
}

