//
// Created by 韩正博 on 18/3/30.
//

#ifndef EXERCISE2_POSTORDERTRAVERSAL_H
#define EXERCISE2_POSTORDERTRAVERSAL_H


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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vector;
        preTraversal(root,vector);
        return vector;
    }
    void preTraversal(TreeNode* root , vector<int> &v){
        if(root == NULL)
            return;
        preTraversal(root->left,v);
        preTraversal(root->right,v);
        v.push_back(root->val);
    }
};


#endif //EXERCISE2_POSTORDERTRAVERSAL_H
