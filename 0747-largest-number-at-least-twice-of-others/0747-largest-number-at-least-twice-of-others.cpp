class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int m=INT_MIN;
       int idx=-1;
       for(int i=0;i<nums.size();i++){
            if(nums[i]>m){ 
                m=nums[i];
                idx=i;
            } 
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums[n-2]*2<=nums[n-1]) return idx;
        else return -1;
    }
};