/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = random = nullptr;
    }
};*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        // code here
        
        Node* temp= head;
        
        while(temp){
            
            Node* newel= new Node(temp->data);
            newel->next= temp->next;
            
            temp->next= newel;
            
            temp= temp->next->next;
            
        }
        
        temp= head;
        
        while(temp){
            
            if(temp->random){
                temp->next->random= temp->random->next;
            }
            
            temp= temp->next->next;
            
        }
        
        temp= head;
        Node* ans= head->next;
        Node* res= ans;
        
        while(temp){
            
            temp->next=temp->next->next;
            
            if(res->next){
                res->next= res->next->next;
            }
            
            temp= temp->next;
            res= res->next;
        }
        
        
        return ans;
        
        
    }
};