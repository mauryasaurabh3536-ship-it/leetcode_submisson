class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int i=0;
      int n=nums.size();
      int j=0;
      int sum=0;
      for(i=0;i<n;i++){
        sum+=nums[i];
      }
      if(sum==x) return n;
      int t=sum-x;
      if(t<0) return -1;
      int temp=0;
      int a=0;
      i=0;
      while(j<n){
        temp+=nums[j];
        while(temp>t){
            temp=temp-nums[i];
            i++;
        }
        if(temp==t){
            a=max(a,j-i+1);
        }
        j++;
      }
      if(a==0) return -1;
      return n-a;
    }
};