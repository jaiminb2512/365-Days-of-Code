/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        

*****************************************************************/

Node* reverseLinkedList(Node *head)
{
   Node* prev = nullptr;
   Node* curr = head;
   Node* next = nullptr;

   while(curr != nullptr){
       next = curr -> next;
       curr->next = prev;
       prev = curr;
       curr = next;
   }

   return prev;
}
