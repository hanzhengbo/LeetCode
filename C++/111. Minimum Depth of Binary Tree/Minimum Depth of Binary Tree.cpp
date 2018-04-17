//
// Created by 韩正博 on 18/4/17.
//
#include "../header.h"

class Solution {
public:
    int minDepth(TreeNode *root) {
        int min = INT_MAX;
        int count = 0; // 判断是否只有一个节点
        int temp = 0; // 作为递归的变量

        if (root == NULL)
            return 0;
        if (root->left) {
            count = 1;
            temp = 1 + minDepth(root->left);
            if (temp < min)
                min = temp;
        }
        if (root->right) {
            count = 1;
            temp = 1 + minDepth(root->right);
            if (temp < min)
                min = temp;
        }
        if (count == 0)
            min = 1;
        return min;
    }
};

