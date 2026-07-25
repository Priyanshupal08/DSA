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
  
    int ans=-1;
  
    int findCeil(Node* root, int k) {
        // code here
        
        if(root==NULL){
            return 0;
        }
        
        if(root->data>=k){
            ans=root->data;
            findCeil(root->left, k);
        }
        
        else{
            findCeil(root->right, k);
        }
        
        
        return 0+ans;
        
    }
};
