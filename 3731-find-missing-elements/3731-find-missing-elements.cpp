class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int count=nums[i];
            while(nums[i+1]-count>1){
                count++;
                v.push_back(count);
            }
        }
        return v;
    }
};