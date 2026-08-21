class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        long long sum=0;
        while(i<j){
            sum+=nums[j-1];
            i++;
            j=j-2;
        }
        return sum;
    }
};