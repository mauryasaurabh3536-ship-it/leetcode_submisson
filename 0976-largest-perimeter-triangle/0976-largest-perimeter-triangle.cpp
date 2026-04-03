class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int area=INT_MIN;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                area=max(area,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        if(area==INT_MIN) return 0;
        return area;
    }
};