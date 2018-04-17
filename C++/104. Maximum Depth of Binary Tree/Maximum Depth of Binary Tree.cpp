//
// Created by 韩正博 on 18/4/17.
//
#include "../header.h"

class Solution {
public:
    int maxDepth(TreeNode *root) {
        int max = 1;
        int temp = 0;
        if (root == NULL)
            return 0;
        if (root->left) {
            temp = 1 + maxDepth(root->left);
            if (temp > max)
                max = temp;
        }

        if (root->right) {
            temp = 1 + maxDepth(root->right);
            if (temp > max)
                max = temp;
        }
        return max;
    }
};
