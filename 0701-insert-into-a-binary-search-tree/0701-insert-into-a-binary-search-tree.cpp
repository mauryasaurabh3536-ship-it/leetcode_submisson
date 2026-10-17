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
    TreeNode* insertIntoBST(TreeNode* root, int key) {
        if(root==NULL) return new TreeNode(key);
        if(root->val>key){
            if(root->left ==NULL){
                TreeNode* temp=new TreeNode(key);
                root->left=temp;
                return root;
            }
            else insertIntoBST(root->left,key);
        }
        else{
            if(root->right ==NULL){
                TreeNode* temp=new TreeNode(key);
                root->right=temp;
                return root;
            }
            else insertIntoBST(root->right,key);
        }
        return root;
    }
};