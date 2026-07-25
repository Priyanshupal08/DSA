/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
  
    Node* a=NULL;
    Node* b=NULL;
    
    void flor(Node* root, int key){
        
        if(root==NULL){
            return;
        }
        
        if(root->data<key){
            a=root;
            flor(root->right, key);
        }
        
        else
            flor(root->left, key);
        
    }
    
    void ceiil(Node* root, int key){
        
        if(root==NULL){
            return;
        }
        
        if(root->data>key){
            b=root;
            ceiil(root->left, key);
        }
        
        else
            ceiil(root->right, key);
        
    }
    
  
  
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        
        vector<Node*> ans;
        
        flor(root, key);
        ceiil(root, key);
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
        
    }
};