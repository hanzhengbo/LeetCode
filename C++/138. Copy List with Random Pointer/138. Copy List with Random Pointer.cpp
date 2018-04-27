//
// Created by 韩正博 on 18/4/26.
//
#include "../header.h"

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head)
            return head;
        RandomListNode *curr = head;
        map<RandomListNode *, int> node_map;//用于对原链表的节点进行编号，方便新链表拷贝时处理random指针
        vector<RandomListNode *> node_vec;
        int i = 0;
        /**
         * 使用vector进行新链表内存空间的申请
         */
        while (curr) {
            node_map[curr] = i;
            node_vec.push_back(new RandomListNode(curr->label));
            curr = curr->next;
            i++;
        }
        curr = head;
        i = 0;
        /**
         * 进行新链表的链接
         */
        while (curr) {
            node_vec[i]->next = node_vec[i + 1];
            i++;
            curr = curr->next;
        }
        curr = head;
        i = 0;
        while (curr) {
            if (curr->random) {
                int temp = node_map[curr->random];
                node_vec[i]->random = node_vec[temp];
            }
            curr = curr->next;
            i++;
        }
        return node_vec[0];
    }
};
