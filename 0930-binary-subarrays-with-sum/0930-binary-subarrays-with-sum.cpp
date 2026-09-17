class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i =0;
        int j=0;
       int n = nums.size();
       int count =0 ;
      for(int i=0;i<n;i++){
         int sum =0 ;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum>goal) break;
            else if(sum==goal) count++;
        }
      }
       return count;
    }
};