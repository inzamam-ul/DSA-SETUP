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


ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || head->next == NULL || k == 0) return head;
    ListNode *cur = head;
    int length = 1;
    while (cur->next)
    {
        cur = cur->next;
        length++;
    }

    cur->next = head;

    k = k % length;
    k = length - k;

    while (k--)
    {
        cur = cur->next;
    }
    
    head = cur->next;
    cur->next = NULL;

    return head;
}