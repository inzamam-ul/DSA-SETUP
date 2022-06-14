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



bool hasCycle(ListNode *head) {
    if(head == NULL) return false;
    ListNode* fast = head;
    ListNode* slow = head;

    while(fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) return true;
    }
    return false;
}