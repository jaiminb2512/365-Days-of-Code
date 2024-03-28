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

Node *removeDuplicates(Node *head) {
    if (head == NULL) return head;
    
    unordered_set<int> seen;
    Node *curr = head;
    seen.insert(curr->data);
    
    while (curr->next != NULL) {
        if (seen.find(curr->next->data) != seen.end()) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            seen.insert(curr->next->data);
            curr = curr->next;
        }
    }
    
    return head;
}