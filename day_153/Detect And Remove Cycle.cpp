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

bool hasCycle(Node* head) {
    if (head == nullptr)
        return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

bool detectAndRemoveCycle(Node* head) {
    bool hasLoop = hasCycle(head);

    if (hasLoop) {
        if (head == nullptr)
            return false;

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        if (fast == nullptr || fast->next == nullptr)
            return false;

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        Node* startOfLoop = slow;

        fast = fast->next;
        while (fast->next != startOfLoop) {
            fast = fast->next;
        }

        fast->next = nullptr;

        return true;
    }

    return false;
}