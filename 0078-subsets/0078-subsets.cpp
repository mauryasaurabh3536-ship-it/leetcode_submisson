class Solution {
public:
    void sub(vector<vector<int>> &ans, int idx, vector<int>v, vector<int>& nums){
        if(idx==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[idx]);
        sub(ans,idx+1,v,nums);
        v.pop_back();
        sub(ans,idx+1,v,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
       sub(ans,0,v,nums); 
       return ans;
    }
};