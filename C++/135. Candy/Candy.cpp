//
// Created by 韩正博 on 18/4/21.
//

#include "../header.h"

class Solution {
public:
    int candy(vector<int> &ratings) {
        int len = ratings.size();
        int result = 0;
        int rating = 0;
        if (len == 1)
            return 1;
        if (len == 2) {
            if (ratings[0] == ratings[1])
                return 2;
            else
                return 3;
        }
        int raisecount = 1;
        int raise = 0;
        int downcount = 1;
        int down = 0;
        int last; //1为上升 0为下降
        int same = -1;
        for (int i = 1; i < ratings.size(); i++) {
            if (ratings[i] > ratings[i - 1]) {
                if (same != -1)
                    result += same;
                same = -1;
                down = 0;
                raisecount++;
                raise = 1;
            }
            if (ratings[i] < ratings[i - 1]) {
                if (same != -1)
                    result += same;
                same = -1;
                raise = 0;
                downcount++;
                down = 1;
            }

            if ((last == 0 && raise == 1) || (last == 1 && down == 1)) {
                int count = max(downcount, raisecount);
                result += count * (count + 1) / 2 - 1;
                raisecount = 1;
                downcount = 1;
                same = -1;

                continue;
            }
            if (ratings[i] == ratings[i - 1]) {
                same++;
            }
            if (i == len - 1) {
                if (same != -1) {
                    result += (same + 1);
                }

                int count = max(downcount, raisecount);
                result += (count + 1) * count / 2;
            }
            last = raise;
        }
        result++;
        return result;
    }
};

int main(void) {
    Solution *solution = new Solution();
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    int num = solution->candy(v);
    printf("%d",num);
    return 0;
}