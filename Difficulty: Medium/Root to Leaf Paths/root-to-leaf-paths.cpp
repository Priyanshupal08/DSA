/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
  
    vector<vector<int>> ans;
  
    void traverse(Node* root, vector<int> vec){
        
        if(root==NULL){
            return;
        }
        
        vec.push_back(root->data);
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(vec);
            return;
        }
        
        traverse(root->left, vec);
        // if(root->left!=NULL){
        traverse(root->right, vec);
        // }
        
    }
  
    vector<vector<int>> paths(Node* root) {
        // code here
        vector<int> vec;       
        traverse(root,vec);
        
        return ans;
        
    }
};