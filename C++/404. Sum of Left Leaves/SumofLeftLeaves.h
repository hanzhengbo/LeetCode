//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_SUMOFLEFTLEAVES_H
#define LEETCODE_SUMOFLEFTLEAVES_H

#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        vector<int> result ;
        int sum = 0;
        Travserval(root,result);
        for(int i = 0 ; i < result.size() ; i++)
            sum+=result[i];
        return sum;
    }

    void Travserval(TreeNode * root , vector<int> & rs){
        if(root->left){
            if(!root->left->left && !root->left->right){
                int temp =root->left->val;
                rs.push_back(temp);
            }
            else
                Travserval(root->left,rs);
        }


        if(root->right)
            Travserval(root->right,rs);

    }
};


#endif //LEETCODE_SUMOFLEFTLEAVES_H
