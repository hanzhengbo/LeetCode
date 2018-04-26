//
// Created by 韩正博 on 18/4/26.
//
#include "../header.h"

class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        ListNode less_head(0);
        ListNode *less_curr = &less_head;
        ListNode more_head(0);
        ListNode *more_curr = &more_head;
        while (head) {
            if (head->val < x) {
                less_curr->next = head;
                less_curr = head;
            } else {
                more_curr->next = head;
                more_curr = head;
            }
            head = head->next;
        }

        less_curr->next = more_head.next;
        more_curr->next = NULL;
        return less_head.next;
        /**
         * 错误解法
         * ListNode* less_head = NULL;
        ListNode* less_curr = less_head;
        ListNode* more_head = NULL;
        ListNode* more_curr = more_head;
        while(head){
            if(head->val < x){
                if(!less_head){
                    less_head = head;
                    less_curr = head;
                    head = head->next;
                    continue;
                }
                less_curr->next = head;
                less_curr = less_curr->next;
            }
            else{
                if(!more_head){
                    more_head = head;
                    more_curr = head;
                    head = head->next;
                    continue;
                }
                more_curr->next = head;
                more_curr = more_curr->next;
            }
            head = head->next;
        }
        more_curr = NULL; //改为more_curr->next = NULL;
        free(more_curr);//删除这句话
        less_curr->next= more_head;
        return less_head;
         */
    }
};
//
//int main(void) {
//    ListNode l1(1);
//    ListNode l2(4);
//    ListNode l3(3);
//    ListNode l4(2);
//    ListNode l5(5);
//    ListNode l6(2);
//    l1.next = &l2;
//    l2.next = &l3;
//    l3.next = &l4;
//    l4.next = &l5;
//    l5.next = &l6;
//    Solution *solution = new Solution();
//    solution->partition(&l1, 3);
//    return 0;
//}
