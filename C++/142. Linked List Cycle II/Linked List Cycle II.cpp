//
// Created by 韩正博 on 18/4/26.
//

#include "../header.h"
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> vset;
        while(head){
            if(vset.find(head) != vset.end())
                return head;
            vset.insert(head);
            head = head->next;
        }
        return NULL;
    }
};