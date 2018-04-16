//
// Created by 韩正博 on 18/4/16.
//

class Solution {
public:
    int findComplement(int num) {
        int tempnum = ~num;
        unsigned zero = ~0;
        while (zero & num)
            zero <<= 1;
        // cout << bitset<numeric_limits<unsigned int>::digits>(zero)  << endl;
        int result = ~zero & tempnum;
        return result;
    }
};