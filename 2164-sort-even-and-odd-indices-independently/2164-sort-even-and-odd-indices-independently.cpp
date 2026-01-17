class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
     int n=nums.size();
     for(int i=0;i<n-2;i++){
        for(int j=0;j<nums.size()-2;j++){
            if(nums[j]>nums[j+2]){
                swap(nums[j],nums[j+2]);
            }
        }
     } 
     for(int i=1;i<n-2;i++){
        for(int j=1;j<n-2;j++){
            if(nums[j+2]>nums[j]){
                swap(nums[j],nums[j+2]);
            }
        }
     }  
     return nums;
    }
};