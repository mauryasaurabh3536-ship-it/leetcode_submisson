class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int sum=0;
        for(int i=0;i<nums.size();i++){
           m[nums[i]]++; 
        }
        for(auto x:m){
            if((x.second)%k==0) sum=sum+x.first*x.second;
        }
        return sum;
    }
};