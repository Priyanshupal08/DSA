/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
  
    struct Node* modifyTheList(struct Node* head) {
        
        Node* temp= head;
        
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        
        
        int x= (count/2);
        
        if(count%2==0){
            x--;
        }
        
        
        
        temp=head;
        while(x--){
            temp=temp->next;
        }
        
        
        
        Node* prev=temp->next;
        Node* curr=temp->next->next;
        
        if(curr==NULL){
            int z= head->data;
            head->data= (prev->data)-z;
            prev->data=z;
        }
        
        else{
            
            Node* nel=temp->next->next->next;
            
            
            prev->next=NULL;
            while(nel!=NULL){
                curr->next=prev;
                prev=curr;
                curr=nel;
                nel=curr->next;
            }
            
            curr->next= prev;
            temp->next=curr;
            
            
            Node* a= head;
            Node* b= temp->next;
            
            while(b!=NULL){
                
                int z= a->data;
                a->data= (b->data)-(a->data);
                b->data=z;
                
                b= b->next;
                a=a->next;
            }
            
            prev=temp->next;
            curr=temp->next->next;
            nel=temp->next->next->next;
            
            prev->next=NULL;
            while(nel!=NULL){
                curr->next=prev;
                prev=curr;
                curr=nel;
                nel=curr->next;
            }
            
            curr->next= prev;
            temp->next=curr;
            
        }
        
        
        return head;
        
        
        
    }
};