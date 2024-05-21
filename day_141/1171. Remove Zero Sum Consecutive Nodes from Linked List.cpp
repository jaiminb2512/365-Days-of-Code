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
    
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int sum = 0;
        unordered_map<int, ListNode*> sumMap;
        ListNode* current = dummy;

        while (current != nullptr) {
            sum += current->val;
            if (sumMap.find(sum) != sumMap.end()) {
                ListNode* prevSumNode = sumMap[sum]->next;
                int tempSum = sum + prevSumNode->val;
                while (prevSumNode != current) {
                    sumMap.erase(tempSum);
                    prevSumNode = prevSumNode->next;
                    tempSum += prevSumNode->val;
                }
                sumMap[sum]->next = current->next;
            } else {
                sumMap[sum] = current;
            }
            current = current->next;
        }

        return dummy->next;
    }

};