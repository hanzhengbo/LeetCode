//
// Created by 韩正博 on 18/4/9.
//

#ifndef LEETCODE_REMOVELINKEDLISTELEMENTS_H
#define LEETCODE_REMOVELINKEDLISTELEMENTS_H


#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *newHead = head, *curr = head;
        while (curr) {
            if (newHead->val == val) {
                curr = newHead->next;
                newHead = newHead->next;
                continue;
            }
            if (curr->next != NULL)
                if (curr->next->val == val) {
                    curr->next = curr->next->next;
                    continue;
                }
            curr = curr->next;
        }
        return newHead;
    }
};

#endif //LEETCODE_REMOVELINKEDLISTELEMENTS_H
