/* a Node of the doubly linked list
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        
        while(head->data==x){
            head= head->next;
        }
        
        Node* pre= head;
        Node* curr= head->next;
        
        while(curr){
            if(curr->data==x){
                if(curr->next==NULL){
                    pre->next=NULL;
                }
                else{
                    pre->next= curr->next;
                    curr->next->prev= pre;
                }
            }
            
            pre= curr;
            curr= curr->next;
        }
        
        return head;
        
    }
};