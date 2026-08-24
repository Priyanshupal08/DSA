/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        // code here
        
        
        unordered_set<int> s;
        
        Node* temp= head;
        
        while(temp){
            s.insert(temp->data);
            temp=temp->next;
        }
        
        temp=head;
        
        vector<vector<int>> ans;
        
        while(temp->data<= (target/2)){
            
            int diff= target- temp->data;
            
            if(target/2== diff){
                temp=temp->next;
                continue;
            }
            
            if(s.find(diff)!=s.end()){
                ans.push_back({(temp->data), diff});
            }
            
            temp=temp->next;
        }
        
        return ans;
        
    }
};