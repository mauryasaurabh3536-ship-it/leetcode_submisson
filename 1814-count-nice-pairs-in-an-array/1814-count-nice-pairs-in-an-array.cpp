class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=n%10;
            n=n/10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
        }
        long long count=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()) count+=m[nums[i]];
            m[nums[i]]++;
        }
        return count%1000000007;
    }
};