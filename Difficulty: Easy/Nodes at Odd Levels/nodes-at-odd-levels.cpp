/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};*/
class Solution {
  public:
  
  
    vector<int> ans;
    // void kthElements(Node* temp, int k){
        
    //     if(temp==NULL || k<0){
    //         return;
    //     }
        
    //     kthElements(temp->left, k-1);
    //     if(k==0){
    //         ans.push_back(temp->data);
    //         return;
    //     }
    //     kthElements(temp->right, k-1);
        
    // }
    
    // int height(Node* temp){
        
    //     if(temp==NULL){
    //         return 0;
    //     }
        
        
    //     return (max(1+height(temp->left), 1+height(temp->right)));
        
    // }
  
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        
        
        
        int k=1;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            
            int n= q.size();
            Node* temp= q.front();
            
            for(int i=0; i<n; i++){
                
                Node* curr= q.front();
                q.pop();
                
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                    
                if(k%2!=0){
                    ans.push_back(curr->data);
                }
                
            }
            
            k++;
            
        }
        
        sort(ans.begin(), ans.end());
        return ans;
        
        
        // int n= height(root);
        
        // for(int i=0; i<n; i+=2)
        //     kthElements(root,i);
        
        // sort(ans.begin(), ans.end());
        // return ans;
        
    }
};