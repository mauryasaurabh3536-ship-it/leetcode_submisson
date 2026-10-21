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
            int x=(nums[i]-rev(nums[i]));
            m[x]++;
        }
        long long count=0;
        for(auto x : m){
           count+=((long long)(x.second)*((long long)(x.second-1)))/2;
        }
        return count%1000000007;
    }
};