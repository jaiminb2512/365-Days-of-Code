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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return;

        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *second_half = slow->next;
        slow->next = nullptr;

        ListNode *prev = nullptr, *curr = second_half, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        second_half = prev;

        // Step 3: Merge the two halves alternately
        ListNode *p1 = head, *p2 = second_half;
        while (p2) {
            ListNode *temp1 = p1->next;
            ListNode *temp2 = p2->next;
            p1->next = p2;
            p2->next = temp1;
            p1 = temp1;
            p2 = temp2;
        }
    }
};