class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st=0;
        int end=0;
        int sum=0;
        int m=INT_MAX;
        int n=nums.size();
        while(end<n){
            sum=sum+nums[end];
            while(sum>=target){
                m=min(m,end-st+1);
                sum=sum-nums[st];
                st++;
           }
           end++;
        }
        if(m==INT_MAX) return 0;
        return m; 
    }
};