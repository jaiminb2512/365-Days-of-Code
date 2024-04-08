#include <bits/stdc++.h> 

template<typename T>
LinkedListNode<T>* reverseList(LinkedListNode<T>* head) {
    LinkedListNode<T>* prev = nullptr;
    LinkedListNode<T>* curr = head;
    while (curr != nullptr) {
        LinkedListNode<T>* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

template<typename T>
LinkedListNode<T>* findMiddle(LinkedListNode<T>* head) {
    LinkedListNode<T>* slow = head;
    LinkedListNode<T>* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

template<typename T>
bool isPalindrome(LinkedListNode<T>* head) {
    if (head == nullptr || head->next == nullptr) return true;

    LinkedListNode<T>* middle = findMiddle(head);

    LinkedListNode<T>* reversedHalf = reverseList(middle);

    LinkedListNode<T>* p1 = head;
    LinkedListNode<T>* p2 = reversedHalf;
    while (p2 != nullptr) {
        if (p1->data != p2->data) return false;
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}
