class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int count=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        int x=nums[i];
        if(x==0) continue;
        else{
            for(int j=0;j<nums.size();j++){
                nums[j]=nums[j]-x;
                
            }
            count++;
            if(nums[nums.size()-1]==0)
            break;
        }
       }
       return count;
    }
};