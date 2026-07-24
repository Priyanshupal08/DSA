/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    int maxNodeLevel(Node *root) {
        // code here
        
        int maxi=0;
        int level=0;
        int ans=0;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int n= q.size();
            
            if(n>maxi){
                maxi=n;
                ans= level;
            }
            
            for(int i=0; i<n; i++){
                
                Node* curr= q.front();
                q.pop();
                
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                
            }
            level++;
            
        }
        
        return ans;
        
    }
};