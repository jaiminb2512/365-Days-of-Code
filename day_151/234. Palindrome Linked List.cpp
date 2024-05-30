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
   
    ListNode *reverse_list(ListNode * head){
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *Next = NULL;

        while(curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
         ListNode *temp = head;


         if(head == NULL || head->next == NULL) return head;
         ListNode *fast = head;
         ListNode *slow= head;

         while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
         }

         ListNode *newList = reverse_list(slow);

         while((temp != NULL && newList != NULL)){
            if(temp->val != newList->val){
                  return false;
            }
            else{
            temp = temp->next;
            newList = newList->next;
            } 
         }
         return true;
    }
};