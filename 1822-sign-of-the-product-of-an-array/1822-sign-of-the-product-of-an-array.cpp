class Solution {
public:
    int arraySign(vector<int>& nums) {
      int count=0;
      int flag=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<0) count++;
        else if(nums[i]==0) flag=1;
      }  
      if(flag==1) return 0;
      else if(count%2==0) return 1;
      else return -1;
    }
};