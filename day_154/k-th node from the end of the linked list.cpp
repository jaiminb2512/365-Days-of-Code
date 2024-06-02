#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/

node *findKthFromLast(node *head, int k)
{
	if (head == nullptr)
            return nullptr;
        
	node *main_ptr = head;
	node *ref_ptr = head;
	
	int count = 0;
	
	while (count < k){
		if (ref_ptr == nullptr)
			return nullptr; 
		
		ref_ptr = ref_ptr->next;
		count++;
	}
	
	while (ref_ptr != nullptr){
		main_ptr = main_ptr->next;
		ref_ptr = ref_ptr->next;
	}
	
	return main_ptr;
}
