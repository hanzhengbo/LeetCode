//
// Created by 韩正博 on 18/3/30.
//

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p || !q) return q == p;
    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}