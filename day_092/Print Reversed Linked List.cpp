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

void reverseLL(Node*& head) {
    if (head == nullptr) {
        return;
    }

    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

void printReverse(Node* head) {
    reverseLL(head);

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}