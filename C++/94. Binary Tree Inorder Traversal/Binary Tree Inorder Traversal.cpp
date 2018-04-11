//
// Created by 韩正博 on 18/4/6.
//

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vector;
        preTraversal(root,vector);
        return vector;
    }
    void preTraversal(TreeNode* root , vector<int> &v){
        if(root == NULL)
            return;
        preTraversal(root->left,v);
        v.push_back(root->val);
        preTraversal(root->right,v);
    }
};

