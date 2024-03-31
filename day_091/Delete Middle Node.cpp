Node* deleteMiddle(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head->next;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast == nullptr) {
        Node* temp = slow;
        prev->next = slow->next;
        delete temp;
    } 
    
    else {
        Node* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
    }

    return head;
}
