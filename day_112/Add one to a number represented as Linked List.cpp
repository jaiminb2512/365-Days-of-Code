/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

Node* addOne(Node* head) {
    head = reverseLinkedList(head);
    
    Node* current = head;
    int carry = 1;
    
    while (current != nullptr) {
        int sum = current->data + carry;
        current->data = sum % 10;
        
        carry = sum / 10;
        
        if (carry == 0) {
            break;
        }
        
        if (current->next == nullptr && carry > 0) {
            current->next = new Node();
            current = current->next;
            current->data = carry;
            current->next = nullptr;
            break;
        }
        
        current = current->next;
    }
    
    return reverseLinkedList(head);
}
