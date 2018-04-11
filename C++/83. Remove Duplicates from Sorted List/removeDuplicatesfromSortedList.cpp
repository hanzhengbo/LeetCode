//
// Created by 韩正博 on 18/3/30.
//


#include <cstdio>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    int k = 0;
    struct ListNode *p = head;
    if(p==NULL){
        return head;
    }
    while(p->next!=NULL){
        int temp = p->val;
        if(temp!=(p->next->val)){
            p=p->next;
        }
        else{

            p->next=p->next->next;
        }
    }
    return head;
}