/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    // int count=1;
    
    int getSize(Node* root) {
        // code here
        
        if(root==NULL){
            return 0;
        }
        
        
        return getSize(root->left)+ getSize(root->right) + 1;
    }
};