#include <cstdio>
#include <cstdlib>

//
// Created by 韩正博 on 18/3/30.
//
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *result=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *empty=(struct ListNode*)malloc(sizeof(struct ListNode));
    empty->val=0;
    empty->next=NULL;
    int jw = 0;
    struct ListNode *p1=l1 , *p2=l2,*res=result;
    while(p1!=NULL || p2!=NULL){
        if(p1 == NULL)
            p1 = empty;
        else if(p2 == NULL)
            p2 = empty;

        res->val=(p1->val+p2->val+jw)%10;
        jw=(p1->val+p2->val+jw)/10;
        p1=p1->next;
        p2=p2->next;
        if(p1!=NULL||p2!=NULL){
            res->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            res = res->next;
            res->next=NULL;
        }
    }
    if(jw>0){
        res->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        res->next->val=jw;
        res->next->next=NULL;
    }
    free(empty);
    return result;
}
