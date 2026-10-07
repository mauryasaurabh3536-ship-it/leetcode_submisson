class Solution {
public:
void sum(int k,vector<vector<int>> &ans,vector<int> &nums,vector<int>& v, int target, int idx){
    if(target==0){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
    }
    if(target<0) return;
    for(int i=idx;i<nums.size();i++){
        v.push_back(nums[i]);
        sum(k,ans,nums,v,target-nums[i],i+1);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>v;
        vector<int>nums;
        for(int i=0;i<9;i++){
            nums.push_back(i+1);
        }
        sum(k,ans,nums,v,n,0);
        return ans;
    }
};