/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    bool traverse(Node* root){
        
        if(root==NULL){
            return true;
        }
        
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        
        
        // if(root->left==NULL || root->right==NULL){
        //     return false;
        // }
        
        int a= (root->left==NULL)? 0:(root->left->data);
        int b= (root->right==NULL)? 0:(root->right->data);
        
        if((a+b)!= root->data){
            return false;
        }
        
        return traverse(root->left) && traverse(root->right);
        
        
    }
  
  
    bool isSumProperty(Node *root) {
        // code here
        
        return traverse(root);
        
    }
};