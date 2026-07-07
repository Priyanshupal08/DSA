/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        
        Node* ans= new Node(-1);
        
        
        Node* temp1=head1;
        Node* temp2=head2;
        
        
        Node* temp =ans;
        while(temp1 && temp2){
            
            if((temp1->data) <= (temp2->data)){
                temp->next= new Node(temp1->data);
                temp= temp->next;
                
                temp1=temp1->next;
            }
            
            else{
                temp->next= new Node(temp2->data);
                temp= temp->next;
                temp2=temp2->next;
            }
            
        }
        
        while(temp1){
                temp->next= new Node(temp1->data);
                temp= temp->next;
        
                temp1=temp1->next;
        }
        
        while(temp2){
                temp->next= new Node(temp2->data);
                temp= temp->next;
        
                temp2=temp2->next;
        }
        
        
        
        
        ans= ans->next;
        return ans;
        
        
        
    }
};