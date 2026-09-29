class Solution {
public:
    void helper(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalans,int idx,bool flag){
        if(idx==nums.size()){
            finalans.push_back(ans);
            return;
        }
        if(idx==nums.size()-1){
            if(flag==true){
                ans.push_back(nums[idx]);
                helper(nums,ans,finalans,idx+1,true);
                ans.pop_back();
            }
            helper(nums,ans,finalans,idx+1,true);
            return;
        }
        else if(nums[idx]==nums[idx+1]){
            if(flag==true){
                ans.push_back(nums[idx]);
                helper(nums,ans,finalans,idx+1,true);
                ans.pop_back();
            }
            helper(nums,ans,finalans,idx+1,false);
        }
        else{
            if(flag==true){
                ans.push_back(nums[idx]);
                helper(nums,ans,finalans,idx+1,true);
                ans.pop_back();
            }

            helper(nums,ans,finalans,idx+1,true);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> finalans;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        helper(nums,ans,finalans,0,true);
        return finalans;
    }
};