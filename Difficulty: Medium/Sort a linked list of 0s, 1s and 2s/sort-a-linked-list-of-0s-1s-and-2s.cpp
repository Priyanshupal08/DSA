/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        
        
        Node* temp= head;
        
        int n=0; 
        while(temp){
            n++;
            temp=temp->next;
        }
        
        vector<int> vec(n,1);
        
        temp=head;
        
        int i=0, j=n-1;
        
        while(temp){
            
            if(temp->data==0){
                vec[i++]=0;
            }
            
            else if(temp->data==2){
                vec[j--]=2;
            }
            
            temp=temp->next;
        }
        
        
        i=0;
        temp=head;
        
        while(temp){
            temp->data= vec[i++];
            
            temp=temp->next;
        }
        
        return head;
        
        
        
        // Node* z= new Node(-1);
        // Node* o= new Node(-1);
        // Node* t= new Node(-1);
        
        // Node* z1= z;
        // Node* o1= o;
        // Node* t1= t;
        
        // while(head){
            
        //     if(head->data==0){
        //         // if(z->data==-1){
        //         //     z->data=head->data;
        //         //     // z->next=NULL;
        //         //     res=z;
        //         // }
                
        //         z->next=head;
        //         z= z->next;
                
        //         // else{
        //         //     z->next=head;
        //         //     z=z->next;
        //         //     z->next=NULL;
        //         // }
        //     }
            
        //     else if(head->data==1){
        //         // if(o->data==-1){
        //         //     o=head;
        //         //     o->next=NULL;
        //         // }
                
        //         o->next=head;
        //         o= o->next;
        //         // else{
                
        //         //     o->next=head;
        //         //     o=o->next;
        //         //     o->next=NULL;
        //         // }
                
        //     }
            
        //     else{
                
        //         t->next=head;
        //         t= t->next;
        //         // if(t->data==-1){
        //         //     t=head;
        //         //     t->next=NULL;
        //         // }
                
        //         // else{
        //         //     t->next=head;
        //         //     t=t->next;
        //         //     t->next=NULL;
        //         // }
                
        //     }
            
        //     head=head->next;
        // }
        // t->next=NULL;
        
        
        // z->next= o1->next;
        // o->next= t1->next;
        
        // z1=z1->next;
        
        
        // // cout<<res->data;
        
        // return z1;
        
        
    }
};