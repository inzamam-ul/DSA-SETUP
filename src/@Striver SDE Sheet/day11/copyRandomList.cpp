#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node* random;

    Node() {
        val = 0;
        next = NULL;
        random = NULL;
    }
    Node(int in) {
        val = in;
        next = NULL;
        random = NULL;
    }
    Node(int in, Node* n) {
        val = in;
        next = n;
        random = NULL;
    }
};



Node* copyRandomList(Node* head) {
    Node *iter = head;
    Node *front = head;

    while(iter != NULL){
        front = iter->next;
        Node *dummy = new Node(iter->val);
        iter->next = dummy;
        dummy->next = front;
        iter = front;
    }

    iter = front = head;

    while(iter != NULL){
        if(iter->random != NULL){
            iter->next->random = iter->random->next;
        }
        iter = iter->next->next;
    }

    iter = head;

    Node *cloneHead = new Node(0);
    Node *copyHead = cloneHead;


    while(iter != NULL){
        front = iter->next->next;
        copyHead->next = iter->next;
        iter->next = front;
        copyHead = copyHead->next;
        iter = front;
    }

    return cloneHead->next;

}