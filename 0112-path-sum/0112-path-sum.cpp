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

    bool solve(TreeNode* temp, int sum, int k){

        if(temp==NULL){
            return false;
        }

        sum+= temp->val;

        if(temp->left==NULL && temp->right==NULL){
            if(sum==k){
                return true;
            }

            return false;
        }

        return solve(temp->left, sum, k) || solve(temp->right, sum, k);


    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solve(root, 0, targetSum);

    }
};