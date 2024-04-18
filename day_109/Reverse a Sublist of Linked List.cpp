#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/


Node* reverseSublist(Node* head, int x, int y) {
    if (head == nullptr || x == y) return head;

    Node dummy(0);
    dummy.next = head;
    Node* prevX = &dummy;

    for (int i = 1; i < x && prevX != nullptr; i++) {
        prevX = prevX->next;
    }

    if (prevX == nullptr || prevX->next == nullptr) return head; 

    Node* prev = prevX->next;
    Node* curr = prev->next;

    for (int i = x; i < y && curr != nullptr; i++) {
        prev->next = curr->next;
        curr->next = prevX->next;
        prevX->next = curr;
        curr = prev->next;
    }

    return dummy.next;
}