#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    ListNode* next;
    int val;
    ListNode() {
        val = 0;
        next = NULL;
    }
    ListNode(int in) {
        val = in;
        next = NULL;
    }
    ListNode(int in, ListNode* n) {
        val = in;
        next = n;
    }
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(headA == NULL || headB == NULL){
        return NULL;
    }

    ListNode *a = headA;
    ListNode *b = headB;

    while(a != b){
        a = a == NULL ? headB : a->next;
        b = b == NULL ? headA : b->next;
    }

    return a;
}