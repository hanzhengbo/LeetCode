//
// Created by 韩正博 on 18/3/30.
//

#ifndef EXERCISE2_REMOVENTHFROMEND_H
#define EXERCISE2_REMOVENTHFROMEND_H


#include <cstdio>
#include <cstdlib>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *res = head;
        int length = vlength(head);
        int reallength = length - n + 1; // 要删除的序数。
        int count = 0;
        int vcount = 0;

        if (n > length)
            return res;
        if (n <= 0)
            return res;
        if (length == 1) {
            free(res);
            return NULL;
        }
        if (n == length) {
            res = head->next;
            return res;
        }
        while (count < reallength - 2) {
            head = head->next;
            count++;
        }

        head->next = head->next->next;

        return res;
    }

    int vlength(ListNode *head) {
        int len = 0;
        while (head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }
};


#endif //EXERCISE2_REMOVENTHFROMEND_H
