/*Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int height(Node* root){
        
        if(root==NULL){
            return 0;
        }
        
        return max(1+height(root->left), 1+height(root->right));
        
    }
    
    int leaf=0;
    
    bool perfect(Node* root){
        
        if(root->left==NULL && root->right==NULL){
            leaf++;
            return true;
        }
        
        if(root->left==NULL || root->right==NULL){
            return false;
        }
        
        
        return perfect(root->left) && perfect(root->right);
        
    }
  
    bool isPerfect(Node *root) {
        // code here
        
        
        bool perf= perfect(root);
        
        if(perf){
            
            int h= height(root)-1;
            int n= pow(2,h);
            
            return n==leaf;
        }
        
        return false;
        
        
    }
};