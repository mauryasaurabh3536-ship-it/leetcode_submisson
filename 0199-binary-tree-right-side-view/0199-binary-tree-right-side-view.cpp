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
    void nthlevel(TreeNode* root,int curr,int levels,vector<int>& ans){
    if(root==NULL) return;
    if(curr==levels){
    ans[levels]=root->val;
    return;
    }
    nthlevel(root->left,curr+1,levels,ans);
    nthlevel(root->right,curr+1,levels,ans);
}

int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));

}
void levelorder(TreeNode* root,vector<int>& ans){
    int n=ans.size();
    for(int i=0;i<n;i++){
        nthlevel(root,0,i,ans);
    }
}
    vector<int> rightSideView(TreeNode* root) {
       vector<int> ans(levels(root),0);
       levelorder(root,ans);
       return ans; 
    }
};