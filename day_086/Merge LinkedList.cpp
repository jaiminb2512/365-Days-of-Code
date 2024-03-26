#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

void merge(Node* head1, Node* head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;

    while (curr1 != NULL && curr2 != NULL) {
      Node *next1 = curr1->next;
      Node *next2 = curr2->next;

      curr1->next = curr2;
      curr2->next = next1;

      curr1 = next1;
      curr2 = next2;
    }
} 