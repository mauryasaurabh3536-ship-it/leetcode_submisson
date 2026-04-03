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
    void lorder(TreeNode* root,vector<vector<int>>& ans){
        if(root==NULL) return;
        queue<TreeNode*>q;
        q.push(root);
        bool lTor=true;
        while(q.size()>0){
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                int idx;
                if(lTor==true){
                    idx=i;
                }
                else{
                    idx=size-i-1;
                }
                v[idx]=temp->val;
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                
            }
            lTor=!lTor;
            ans.push_back(v);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        lorder(root,ans);
        return ans;
    }
};