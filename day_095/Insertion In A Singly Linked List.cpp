/************************************************************

    Following is the LinkedList class structure:

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

Node* insert(Node* head, int n, int pos, int val) {
    if (pos < 0 || pos > n) { 
        cout << "Invalid position\n";
        return head;
    }
    
    Node* newNode = new Node(val); 
    if (pos == 0) { 
        newNode->next = head;
        return newNode;
    }
    
    Node* prev = nullptr;
    Node* curr = head;
    for (int i = 0; i < pos; ++i) { 
        prev = curr;
        curr = curr->next;
    }
    
    prev->next = newNode; 
    newNode->next = curr;
    
    return head;
}