/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp= head;

        if(head==NULL){
            return head;
        }
        
        while(temp){
            
            Node* newel= new Node(temp->val);
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