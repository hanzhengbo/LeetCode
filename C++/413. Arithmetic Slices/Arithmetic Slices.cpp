//
// Created by 韩正博 on 18/4/11.
//

#include "../header.h"
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int len = A.size();
        int difference = 0;
        int lock = 0;
        int count = 1;
        int sum = 0;
        for(int i = 1 ; i < len ; i ++){
            if(lock == 0){
                difference = A[i] - A[i-1];
                lock =1;
                count++;
                continue;
            }
            if(difference == (A[i] - A[i-1])){
                count++;
                if(i == (len-1)){
                    int temp = (count-1) * (count-2)/2;
                    if(temp>0)
                        sum+=temp;
                    continue;
                }
                continue;
            }
            if(count>=3 && difference != (A[i] - A[i-1])){
                sum+=(count-1) * (count-2)/2;
                count = 2;
                difference = A[i] - A[i-1];
                continue;
            }
            if(count<3 && difference != (A[i] - A[i-1])){
                difference = A[i] - A[i-1];
                count = 2;
                continue;
            }

        }
        return sum;
    }

};

int main(int argc, char * argv[]){
    vector<int> rs;
    rs.push_back(1);
    rs.push_back(2);
    rs.push_back(3);
    rs.push_back(4);
    rs.push_back(6);
    rs.push_back(7);
    rs.push_back(8);
    rs.push_back(9);
    Solution *solution = new Solution();
    int num = solution->numberOfArithmeticSlices(rs);
    printf("%d",num);
    return 0;
}
