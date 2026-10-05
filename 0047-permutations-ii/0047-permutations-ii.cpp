class Solution {
public:
    void perm(vector<vector<int>>& ans,vector<int>& nums,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        vector<bool> v(21,0);
        for(int i=index;i<nums.size();i++){
            if(v[nums[i]+10]==0){
                swap(nums[i],nums[index]);
                perm(ans,nums,index+1);
                swap(nums[i],nums[index]);
                v[nums[i]+10]=1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(ans,nums,0);
        return ans;
    }
};