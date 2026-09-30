class Solution {
public:
    void comb( vector<vector<int>> &ans, vector<int>v,int target,int n, int idx,vector<int> candidates){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0) return ;
        for(int i=idx;i<n;i++){
            v.push_back(candidates[i]);
            comb(ans,v,target-candidates[i],n,i,candidates);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;
        int n=candidates.size();   
       comb(ans,v,target,n,0,candidates); 
       return ans;
    }
};