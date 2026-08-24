/* Structure of a link list node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        
        set<int> s;
        
        Node* temp= headRef;
        
        while(temp){
            
            s.insert(temp->data);
            temp= temp->next;
        }
        
        Node* prev;
        temp= headRef;
        
        for(auto& i: s){
            
            temp->data= i;
            prev= temp;
            temp= temp->next;
        }
        
        
        prev->next= NULL;
        
        return headRef;
        
        
    }
};