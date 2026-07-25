/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

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
  
    int countPairs(Node* r1, Node* r2, int x) {
        // code here
        
        vector<int> vec1;
        vector<int> vec2;
        
        inorder(r1, vec1);
        inorder(r2, vec2);
        
        
        unordered_set<int> s(vec1.begin(), vec1.end());
        
        int count=0;
        
        for(int i: vec2){
            
            if(s.find(x-i)!=s.end()){
                count++;
            }
            
        }
        
        return count;
    }
};