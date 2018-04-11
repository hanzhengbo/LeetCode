//
// Created by 韩正博 on 18/3/29.
//

#ifndef EXERCISE2_MERGETWOSORTEDLISTS_H
#define EXERCISE2_MERGETWOSORTEDLISTS_H

#include <cstring>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next() {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//        printf("l1->val = %d\n", l1->val);
//        printf("l2->val = %d\n", l2->val);

        ListNode *curr;

        if (l1 == NULL && l2 == NULL)
            return NULL;

        if (l1 != NULL && l2 == NULL)
            curr = l1;
        if (l1 == NULL && l2 != NULL)
            curr = l2;

        if (l1 != NULL && l2 != NULL) {
            if ((l1->val <= l2->val)) {
                curr = l1;
                curr->next = mergeTwoLists(l1->next, l2);
            } else {
                curr = l2;
                curr->next = mergeTwoLists(l1, l2->next);
            }
        }
        return curr;
    }

};


#endif //EXERCISE2_MERGETWOSORTEDLISTS_H
