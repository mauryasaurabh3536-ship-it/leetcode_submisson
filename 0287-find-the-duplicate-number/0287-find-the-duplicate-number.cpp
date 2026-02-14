class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]==nums[i+1])return nums[i];
        // }
        // return -1;
        int i=0;
        while(i<n){
            int correctidx=nums[i];
            if(nums[correctidx]==nums[i]) return nums[i];
            else swap(nums[i],nums[correctidx]);
        }
        return -1;
    }
};