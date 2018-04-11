//
// Created by 韩正博 on 18/4/8.
//

#ifndef LEETCODE_HEADER_H
#define LEETCODE_HEADER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <stack>
#include <queue>

using namespace std;

/**
 * 二叉树的节点结构体定义。
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
#endif //LEETCODE_HEADER_H