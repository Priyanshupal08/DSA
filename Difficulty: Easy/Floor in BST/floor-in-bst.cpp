/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    int ans=-1;
  
    int findMaxFork(Node* root, int k) {
        // code here
        
        
        if(root==NULL){
            return 0;
        }
        
        if(root->data<=k){
            ans=root->data;
            findMaxFork(root->right, k);
        }
        
        else{
            findMaxFork(root->left, k);
        }
        
        
        return 0+ans;
        
        
    }
};