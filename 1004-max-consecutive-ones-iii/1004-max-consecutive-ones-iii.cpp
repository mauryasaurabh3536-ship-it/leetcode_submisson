class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int m=INT_MIN;
        int count=0;
        while(j<n){
            if(nums[j]==0) count++;
            while(count>k && i<=j){
               if(nums[i]==0)
                count--;
                i++;
            }
            if(count<=k) m=max(m,j-i+1);
            j++;
        }
       // if(m==INT_MIN) return 
        return m;
    }
};