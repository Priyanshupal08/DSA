/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int mini(Node* root){
        
        if(root==NULL){
            return 0;
        }
        
        if(root->left==NULL and root->right==NULL){
            return root->data;
        }
        
        
        
        return 0+minValue(root->left);
        
    }
  
    int minValue(Node* root) {
        // code here
        
        if(root->left==NULL){
            return root->data;
        }
        
        int ans= mini(root);
        
        return ans;
    }
};