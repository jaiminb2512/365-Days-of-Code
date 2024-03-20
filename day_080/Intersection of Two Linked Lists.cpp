#include <bits/stdc++.h> 

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    
    unordered_set<Node*> nodes_set;
    while (firstHead != nullptr) {
        nodes_set.insert(firstHead);
        firstHead = firstHead->next;
    }
    
    while (secondHead != nullptr) {
        
        if (nodes_set.find(secondHead) != nodes_set.end()) {
            return secondHead;
        }
        secondHead = secondHead->next;
    }

    return nullptr;
}
