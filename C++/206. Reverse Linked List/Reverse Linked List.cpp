//
// Created by 韩正博 on 18/4/22.
//

#include "../header.h"
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = NULL ;
        ListNode* temp = NULL ;

        while(head){
            curr = head->next;
            head->next = temp;
            temp = head;
            head = curr;
        }
        return curr;
    }
};