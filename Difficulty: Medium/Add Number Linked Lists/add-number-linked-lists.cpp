/*
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
  
    Node* rev(Node* head){
        
        if(head->next==NULL){
            return head;
        }
        
        
        Node* p= head;
        Node* c= head->next;
        Node* n= c->next;
        
        p->next= NULL;
        
        while(n!= NULL){
            
            c->next=p;
            p=c;
            c=n;
            n=c->next;
        }
        
        c->next=p;
        
        return c;
        
    }
  
  
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        
        
        head1= rev(head1);
        head2= rev(head2);
        
        
        Node* h= new Node(0);
        Node* temp= h;

        int carry=0;
        while(head1!=NULL || head2!= NULL || carry!=0){
            int sum= carry;

            if(head1!=NULL){
                sum+= head1->data;
                head1=head1->next;
            }

            if(head2!=NULL){
                sum+= head2->data;
                head2=head2->next;
            }

            carry= sum/10;
            temp->next= new Node(sum%10);
            temp= temp->next;

        }
        
        h= rev(h->next);
        
        if(h->next==NULL){
            return h;
        }
        
        temp= h;
        
        while(temp->data==0 && temp){
            temp=temp->next;
        }
        
        h= temp;
        
        return h;

        // return h->next;
        
        
        // Node* temp= head1;
        
        // long long n= 0;
        // while(temp){
        //     n*=10;
        //     n+= temp->data;
        //     temp=temp->next;
        // }
        
        // cout<<n<<endl;
        // long long m= 0;
        
        // temp=head2;
        // while(temp){
        //     m*=10;
        //     m+= temp->data;
        //     temp=temp->next;
        // }
        
        // cout<<m<<endl;
        
        // unsigned long long res=n+m;
        
        // cout<<res<<endl;
        
        // string s= to_string(res);
    
        
        // int k= s.size();
        
        // Node* ans=new Node(s[0]-'0');
        
        // temp= ans;
        // int i=1;
        
        // while(i<k){
        //     Node* newel = new Node(s[i]-'0');
            
        //     temp->next= newel;
        //     temp=temp->next;
        //     i++;
        // }
        
        
        // return ans;
    }
};