class Solution {
public:
    void perm( vector<vector<int>>& ans,vector<int>& temp,vector<bool>& visited,vector<int>& nums){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<visited.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                perm(ans,temp,visited,nums);
                visited[i]=0;
                temp.pop_back();
            }
           
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(),0);
        perm(ans,temp,visited,nums);
        return ans;
    }
};