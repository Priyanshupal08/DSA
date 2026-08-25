/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        
        int n=0;
        Node* temp= head;
        
        Node* l=NULL;
        
        while(temp){
            n++;
            if(temp->next==NULL){
                l= temp;
            }
            
            temp=temp->next;
        }
        
        
        int r= k%n;
        
        temp=head;
        while(r>0){
            l->next= temp;
            l=l->next;
            temp=temp->next;
            r--;
        }
        
        l->next=NULL;
        
        return temp; 
        
    }
};