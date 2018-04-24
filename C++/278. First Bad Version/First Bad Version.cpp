//
// Created by 韩正博 on 18/4/24.
//

#include "../header.h"
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1)
            return 1;
        int low = 1;
        int high = n;
        int mid;
        while (low<high){
            mid = (high-low)/2+low;
            if(!isBadVersion(mid) )
                low = mid+1;
            if(isBadVersion(mid) )
                high = mid;

        }
        return low;
    }
};