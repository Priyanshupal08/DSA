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

    // vector<> ans;
    // void preorder(TreeNode* root){

    //     if(root==NULL){
    //         return;
    //     }

    //     ans.push_back(root);
    //     preorder(root->left);
    //     preorder(root->right);
    // }

    TreeNode* ans=NULL;
    void traverse(TreeNode* root, int k){

        if(root==NULL){
            return;
        }

        if(root->val==k){
            ans=root;
            return;
        }

        traverse(root->left, k);
        traverse(root->right, k);

    }


    TreeNode* searchBST(TreeNode* root, int val) {
        
        traverse(root, val);
        return ans;

    }
};