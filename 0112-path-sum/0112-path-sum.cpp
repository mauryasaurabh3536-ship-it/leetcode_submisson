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
    void helper(TreeNode* root,bool &flag,int sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            if(root->val==sum){
                flag=true;
            }
            return;
        }
        helper(root->left,flag,sum-(root->val));
        helper(root->right,flag,sum-(root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag=false;
       helper(root,flag,targetSum);
       return flag; 
    }
};