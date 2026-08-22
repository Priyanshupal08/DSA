/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        unordered_set<int> s;
        
        int i=0;
        
        Node* temp= head2;
        
        while(temp){
            s.insert(temp->data);
            temp=temp->next;
        }
        
        Node* res= new Node(-1);
        Node* ans= res;
        
        temp= head1;
        
        while(temp){
            
            if(s.find(temp->data)!= s.end()){
                res->next= temp;
                res= res->next;
            }
            
            temp=temp->next;
        }
        
        res->next=NULL;
        ans= ans->next;
        return ans;
        
    }
};