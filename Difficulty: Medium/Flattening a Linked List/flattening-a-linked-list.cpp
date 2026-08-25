/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
    
    multiset<int> s;
    
    void traverse(Node* temp){
        
        if(temp==NULL){
            return;
        }
        
        s.insert(temp->data);
        
        traverse(temp->bottom);
        traverse(temp->next);
        
    }
  
  
  
    Node* flatten(Node* head) {
        // code here
        
        
        Node* temp= head;
        
        traverse(temp);
        
        Node* ans= new Node(0);
        Node* t= ans;
        
        for(auto& i: s){
            Node* newel= new Node(i);
            
            t->bottom= newel;
            t= t->bottom;
        }
        
        ans= ans->bottom;
        return ans;
        
    }
};