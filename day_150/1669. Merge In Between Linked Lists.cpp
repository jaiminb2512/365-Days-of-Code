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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int> l;
        ListNode* ptr = list1;
        
        for (int i = 0; i < a; ++i) {
            l.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        for (int i = a; i <= b; ++i) {
            ptr = ptr->next;
        }
        
        ListNode* res = nullptr;
        
        for (int i = l.size() - 1; i >= 0; --i) {
            
            if (res == nullptr) {
                res = new ListNode(l[i], nullptr);
            }
            else {
                ListNode* q = new ListNode(l[i], nullptr);
                q->next = res;
                res = q;
            }
        }
        
        ListNode* p = res;
        
        while (p->next != nullptr) {
            p = p->next;
        }
        
        p->next = list2;
        p = res;
        
        while (p->next != nullptr) {
            p = p->next;
        }
        
        p->next = ptr;

        return res;
    }

};