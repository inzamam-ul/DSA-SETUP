#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    ListNode* next;
    int data;
    ListNode(int in) {
        data = in;
        next = NULL;
    }
    ListNode(int in, ListNode* n) {
        data = in;
        next = n;
    }
};

ListNode* reverseList(ListNode* head) {
    ListNode* cur = NULL;
    while (head) {
        ListNode* next = head -> next;
        head -> next = cur;
        cur = head;
        head = next;
    }
    return cur;
}