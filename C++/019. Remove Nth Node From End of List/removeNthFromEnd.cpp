//
// Created by 韩正博 on 18/3/30.
//

#include "removeNthFromEnd.h"

int main(){
    int len = 0;
    ListNode  *listNode = new ListNode(1);
    listNode->next = new ListNode(2);
    listNode->next->next = new ListNode(3);
    Solution *solution = new Solution();
    len = solution->vlength(listNode);
    printf("len = %d\n",len);
    ListNode * res = listNode;

    solution->removeNthFromEnd(listNode,3);
    while(res!=NULL){
        printf("%d\n",res->val);
        res = res->next;
    }
    return 0;
}