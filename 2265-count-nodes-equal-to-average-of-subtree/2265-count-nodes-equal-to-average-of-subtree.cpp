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

    int sum(TreeNode* root, int &n){

        if(root==NULL){
            return 0;
        }

        n++;
        return (root->val + sum(root->left, n) + sum(root->right, n));
    }
    
    void traverse(TreeNode* root, int &ans){

        if(root==NULL){
            return;
        }

        int n=0;
        int k= sum(root, n);
        int avg= k/n;
        
        if(avg==root->val){
            ans++;
        }

        traverse(root->left, ans);
        traverse(root->right, ans);

    }

    int averageOfSubtree(TreeNode* root) { 

        int ans= 0;

        traverse(root, ans);
        
        return ans;
    }
};