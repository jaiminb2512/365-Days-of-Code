/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr)
            return nullptr;

        int totalNodes = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            totalNodes++;
            temp = temp->next;
        }

        if(n > totalNodes)
            return head;

        if(n == totalNodes) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        ListNode* prev = nullptr;
        temp = head;
        for(int i = 0; i < totalNodes - n; ++i) {
            prev = temp;
            temp = temp->next;
        }

        ListNode* toDelete = prev->next;
        prev->next = prev->next->next;
        delete toDelete;

        return head;
    }
};