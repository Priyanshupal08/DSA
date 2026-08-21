class Solution {
  public:
    Node* sort(Node* head) {
        // code here
        
        vector<int> vec;
        
        Node* temp= head;
        
        while(temp){
            vec.push_back(temp->data);
            temp=temp->next;
        }
        
        std::sort(vec.begin(), vec.end());
        
        temp= head;
        
        int i=0;
        while(temp){
            temp->data=vec[i++];
            temp=temp->next;
        }
        
        
        return head;
        
    }
};