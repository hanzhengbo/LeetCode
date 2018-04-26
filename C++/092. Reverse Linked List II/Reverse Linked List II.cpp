//
// Created by 韩正博 on 18/4/25.
//
#include "../header.h"
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int changelen = n-m+1;
        ListNode * res  = head;
        ListNode * pre_head = NULL;

        while(head && m > 1){
            pre_head = head;
            head = head->next;
            m--;
        }
        ListNode* tail = head;

        ListNode* new_head = NULL;

        while(head && changelen--){//逆置链表
            ListNode *temp = head->next;
            head->next = new_head;
            new_head = head;
            head = temp;
        }

        tail->next = head;

        if(pre_head){//存在前驱节点，即m不等于1
            pre_head->next = new_head;
        }
        else
            res = new_head;

        return res;
    }
};