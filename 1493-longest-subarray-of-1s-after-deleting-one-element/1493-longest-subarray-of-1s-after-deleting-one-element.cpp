class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int j=0;
       int count=0;
       int m=INT_MIN;
       while(j<n){
        if(nums[j]==0) count++;
        while(count>1 && i<=j){
            if(nums[i]==0) {
                count--;
            }
            i++;
        }
        if(count==1) m=max(m,j-i);
        j++;
       }
       if(m==INT_MIN) return nums.size()-1;
      // else if(count==0) return m-1;
       else return m;
    }
};