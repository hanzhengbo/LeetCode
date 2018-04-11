//
// Created by 韩正博 on 18/4/6.
//

#ifndef LEETCODE_MERGETWOBINARYTREES_H
#define LEETCODE_MERGETWOBINARYTREES_H

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
        if (t1 == NULL && t2 == NULL)
            return NULL;
        TreeNode *TN = new TreeNode(0);
        if (t1 != NULL && t2 != NULL) {
            TN->val = t1->val + t2->val;
            TN->left = mergeTrees(t1->left, t2->left);
            TN->right = mergeTrees(t1->right, t2->right);
        }

        if (t1 == NULL && t2 != NULL) {
            TN->val = t2->val;
            TN->left = mergeTrees(NULL, t2->left);
            TN->right = mergeTrees(NULL, t2->right);
        }

        if (t1 != NULL && t2 == NULL) {
            TN->val = t1->val;
            TN->left = mergeTrees(t1->left, NULL);
            TN->right = mergeTrees(t1->right, NULL);
        }


        return TN;
    }
};


#endif //LEETCODE_MERGETWOBINARYTREES_H
