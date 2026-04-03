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
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void preorder(TreeNode* root,int &ans,int curr,int n){
        if(root==NULL) return;
        if(curr==n-1) ans=root->val;
        preorder(root->right,ans,curr+1,n);
        preorder(root->left,ans,curr+1,n);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans;
        int n=levels(root);
        preorder(root,ans,0,n);
        return ans;
    }
};