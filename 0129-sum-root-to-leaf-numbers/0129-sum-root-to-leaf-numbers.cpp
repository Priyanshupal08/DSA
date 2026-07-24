/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> ans;
  
    void traverse(TreeNode* root, int x){
        
        if(root==NULL){
            return;
        }
        
        x*=10;
        x+= (root->val);
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(x);
            return;
        }
        
        traverse(root->left, x);
        traverse(root->right, x);
        
    }

    int sumNumbers(TreeNode* root) {

        // vector<int> vec; 
        int x=0;      
        traverse(root, x);
        
        int sum=0;
        for(int i: ans){
            sum+=i;
        }

        return sum;

    }
};