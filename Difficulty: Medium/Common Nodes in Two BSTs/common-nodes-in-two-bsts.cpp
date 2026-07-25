/* Structure for a Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    
    
    void inorder(Node* root, vector<int> &vec){
        
        if(root==NULL){
            return;
        }
        
        inorder(root->left, vec);
        vec.push_back(root->data);
        inorder(root->right, vec);
        
    }
  
    
  
    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        
        
        vector<int> vec1;
        vector<int> vec2;
        
        inorder(r1, vec1);
        inorder(r2, vec2);
        
        
        vector<int> ans;
        
        int n= vec1.size();
        int m= vec2.size();
        
        int i=0;
        int j=0;
        
        
        while(i<n && j<m){
            
            if(vec1[i]<vec2[j]){
                i++;
            }
            
            else if(vec1[i]>vec2[j]){
                j++;
            }
            
            else{
                ans.push_back(vec1[i]);
                i++;
                j++;
            }
            
        }
        
        return ans;
        
        
    }
};