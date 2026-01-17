class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count%2!=0) return false;
       } 
       return true;
    }
};