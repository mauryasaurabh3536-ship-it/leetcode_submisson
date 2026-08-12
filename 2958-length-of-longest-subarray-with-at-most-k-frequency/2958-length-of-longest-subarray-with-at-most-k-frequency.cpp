class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        unordered_map<int,int>m;
        int t=INT_MIN;
        int n=nums.size();
        while(j<n){
           m[nums[j]]++; 
        
        while(m[nums[j]]>k){
            m[nums[i]]--;
            i++;
        }
        t=max(t,j-i+1);
        j++;
        }
        return t;
    }
};