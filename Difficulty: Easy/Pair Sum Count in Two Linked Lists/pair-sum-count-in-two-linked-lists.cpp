/* Structure of a link list node
class Node {
  public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int countPairs(Node* head1, Node* head2, int x) {
        // code here
        
        Node* temp= head1;
        
        unordered_set<int> s;
        
        while(temp!=NULL){
            s.insert(temp->data);
            temp=temp->next;
        }
        
        
        temp= head2;
        
        int ans=0;
        while(temp!=NULL){
            int k= x-(temp->data);
            
            if(s.find(k)!=s.end()){
                ans++;
            }
            temp=temp->next;
        }
        
        return ans;
    }
};