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


ListNode* reverseKGroup(ListNode* head, int k) {
    if(head == NULL || k==1) return head;

    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *current = dummy, *next = dummy, *pre = dummy;

    int count = 0;

    while (current->next != NULL)
    {
        current = current->next;
        count++;
    }

    while(count >= k){
        current = pre->next;
        next = current->next;
        for(int i = 1; i < k; i++){
            current->next = next->next;
            next->next = pre->next;
            pre->next = next;
            next = current->next;
        }
        pre = current;
        count -= k;
    }
    return dummy->next;
    


}