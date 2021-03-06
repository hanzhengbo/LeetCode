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
#include <unordered_map>
#include <stack>
#include <queue>
#include <set>

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
/**
 * 链表的结构体定义
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * Leetcode 138. Copy List with Random Pointer
 */
struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

int ListLength(ListNode *head) {
    int i = 0;
    while (head) {
        i++;
        head = head->next;
    }
    return i;
}
#endif //LEETCODE_HEADER_H
