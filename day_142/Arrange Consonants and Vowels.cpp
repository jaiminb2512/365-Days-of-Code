//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

class Solution
{
public:
    bool isVowels(char ch){
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    
    struct Node* arrangeCV(Node *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        Node *vowelHead = nullptr, *vowelTail = nullptr;
        Node *consonantHead = nullptr, *consonantTail = nullptr;

        Node *current = head;
        while (current != nullptr) {
            if (isVowels(current->data)) {
                if (vowelHead == nullptr) {
                    vowelHead = current;
                    vowelTail = current;
                } else {
                    vowelTail->next = current;
                    vowelTail = current;
                }
            } else {
                if (consonantHead == nullptr) {
                    consonantHead = current;
                    consonantTail = current;
                } else {
                    consonantTail->next = current;
                    consonantTail = current;
                }
            }
            current = current->next;
        }

        if (vowelHead != nullptr) {
            head = vowelHead;
            vowelTail->next = consonantHead;
            if (consonantTail != nullptr) {
                consonantTail->next = nullptr;
            }
        }

        return head;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends