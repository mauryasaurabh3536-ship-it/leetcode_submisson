class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
        }
        int cost=0;
        for(int i=0;i<nums.size();i++){
            cost+=mx-nums[i];
        }
        return cost;
    }
};