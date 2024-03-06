//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    Node* subLinkedList(Node* h1, Node* h2) {
        while (h1 != nullptr && h1->data == 0)
            h1 = h1->next;

        while (h2 != nullptr && h2->data == 0)
            h2 = h2->next;

        int s1 = getLength(h1), s2 = getLength(h2);

        if (s1 == 0 && s2 == 0)
            return new Node(0);

        if (s2 > s1) {
            Node* temp = h1;
            h1 = h2;
            h2 = temp; 
        }
        if (s1 == s2) {
            Node* curr1 = h1;
            Node* curr2 = h2;
            while (curr1->data == curr2->data) {
                curr1 = curr1->next;
                curr2 = curr2->next;

                if (curr1 == nullptr)
                    return new Node(0);
            }
            if (curr2->data > curr1->data) {
                Node* temp = h1;
                h1 = h2;
                h2 = temp; 
            }
        }
        h1 = reverse(h1);
        h2 = reverse(h2);
        Node* ans = nullptr;
        while (h1 != nullptr) {
            int n1 = h1->data;
            int n2 = 0;
            if (h2 != nullptr)
                n2 = h2->data;

            if (n1 < n2) {
                if (h1->next != nullptr) {
                    h1->next->data -= 1;
                }
                n1 += 10;
            }

            Node* curr = new Node(n1 - n2);
            curr->next = ans;
            ans = curr;

            h1 = h1->next;
            if (h2 != nullptr)
                h2 = h2->next;
        }

        while (ans != nullptr && ans->next != nullptr) {
            if (ans->data == 0) {
                ans = ans->next;
            } else
                break;
        }
        return ans;
    }

    int getLength(Node* head) {
        int cnt = 0;
        for (Node* curr = head; curr != nullptr; curr = curr->next)
            cnt++;
        return cnt;
    }

    Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};


//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends