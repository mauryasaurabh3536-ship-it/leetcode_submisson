class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       int i=0;
       int j=0;
       long long count=0;
       int t=INT_MIN;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>t) t=nums[i];
       }
       while(j<nums.size()){
            if(nums[j]==t) m[t]++;
            while(m[t]==k){
                if(nums[i]==t) m[t]--;
                count+=nums.size()-j;
                i++;
            }
            j++;
        }
       return count;
    }
};