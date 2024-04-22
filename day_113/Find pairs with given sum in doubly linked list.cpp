/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int, int>> pairs;
    if (head == nullptr || head->next == nullptr) {
        return pairs;
    }

    Node* start = head;
    Node* end = head;
    
    while (end->next != nullptr) {
        end = end->next;
    }

    while (start != nullptr && end != nullptr && start != end && start->prev != end) {
        
        int sum = start->data + end->data;
        
        if (sum == k) {
            pairs.push_back(make_pair(start->data, end->data));
            start = start->next;
            end = end->prev;
        }
        
        else if (sum < k) {
            start = start->next;
        } 
        
        else {
            end = end->prev;
        }
    }
    
    return pairs;
}












