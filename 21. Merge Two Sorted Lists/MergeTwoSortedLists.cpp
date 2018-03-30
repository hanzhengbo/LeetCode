//
// Created by 韩正博 on 18/3/29.
//

#include <cstdio>
#include "MergeTwoSortedLists.h"

int main() {
    Solution *solution = new Solution();
    ListNode *p = new ListNode(1);
    p->next = new ListNode(2);
    p->next->next = new ListNode(3);

    ListNode *q = new ListNode(1);
    q->next = new ListNode(2);
    q->next->next = new ListNode(3);

    ListNode *res = solution->mergeTwoLists(q, p);

    while (res != NULL) {
        printf("%d\n", res->val);
        res = res->next;
    }

    return 0;
}