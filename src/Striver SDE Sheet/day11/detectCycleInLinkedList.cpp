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


ListNode *detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *entry = head;

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            while(slow != entry){
                slow = slow->next;
                entry = entry->next;
            }
            return entry;

        }
    }
    return NULL;
}