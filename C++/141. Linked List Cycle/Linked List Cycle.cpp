//
// Created by 韩正博 on 18/4/26.
//

#include "../header.h"
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> lset;
        while(head){
            if(lset.find(head)!=lset.end())
                return true;
            lset.insert(head);
            head = head->next;
        }
        return false;
    }
};