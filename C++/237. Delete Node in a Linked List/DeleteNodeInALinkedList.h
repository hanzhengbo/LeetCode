//
// Created by 韩正博 on 18/4/10.
//

#ifndef LEETCODE_DELETENODEINALINKEDLIST_H
#define LEETCODE_DELETENODEINALINKEDLIST_H


#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *(node->next);
    }
};


#endif //LEETCODE_DELETENODEINALINKEDLIST_H
