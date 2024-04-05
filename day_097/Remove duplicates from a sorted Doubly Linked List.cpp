/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node* removeDuplicates(Node* head) {
    if (head == nullptr) return nullptr;

    Node* current = head;

    while (current->next != nullptr) {
        if (current->data == current->next->data) {
            Node* duplicate = current->next;
            current->next = duplicate->next; 
            if (duplicate->next != nullptr)
                duplicate->next->prev = current; 
            delete duplicate;
        } else {
            current = current->next; 
        }
    }

    return head;
}