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
private:
    ListNode* divide(ListNode* head){
        ListNode* pre=head;
        ListNode* lo=head;
        ListNode* lo1=head;

        while(lo1!=NULL && lo1->next!=NULL){
            pre=lo;
            lo=lo->next;
            lo1=lo1->next->next;
        }

        pre->next=NULL;
        return lo;
    }

    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* nh=new ListNode(0);
        ListNode* du=nh;

        while(l1!=NULL || l2!=NULL){
            if(l2==NULL || (l1!=NULL && l1->val<l2->val)){
                du->next=l1;
                du=l1;
                l1=l1->next;
            }else{
                du->next=l2;
                du=l2;
                l2=l2->next;
            }
        }

        return nh->next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* back =divide(head);
        ListNode* left=sortList(head);
        ListNode* right=sortList(back);

        return merge(right,left);
    }
};