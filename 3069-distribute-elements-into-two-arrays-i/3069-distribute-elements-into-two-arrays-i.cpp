class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        int i=2;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        while(i<n){
            if(v1.back()>v2.back()) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
            i++;
        }
        for(int j=0;j<v2.size();j++){
            v1.push_back(v2[j]);
        }
        return v1;
    }
};