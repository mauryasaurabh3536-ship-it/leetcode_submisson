class Solution {
public:
    void combination(vector<int>v,vector<int>& candidates,vector<vector<int>>& ans,int n,int target,int idx){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0) return;
        for(int i=idx;i<n;i++){
            v.push_back(candidates[i]);
            combination(v,candidates,ans,n,target-candidates[i],i);
            v.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>>ans;
        int n=candidates.size();
        combination(v,candidates,ans,n,target,0);
        return ans;
    }
};