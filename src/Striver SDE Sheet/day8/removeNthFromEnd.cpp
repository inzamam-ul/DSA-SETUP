#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    ListNode* next;
    int data;
    ListNode() {
        data = NULL;
        next = NULL;
    }
    ListNode(int in) {
        data = in;
        next = NULL;
    }
    ListNode(int in, ListNode* n) {
        data = in;
        next = n;
    }
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start->next = head;
        ListNode* fast = start;
        ListNode* slow = start;

        for (int i = 1; i <= n; ++i)
        {
            fast = fast->next;
        }

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return start->next;
    
}

