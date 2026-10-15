class Solution {
public:
    int sumCounts(vector<int>& nums) {
     int sum=0;
     int n=nums.size();
     for(int i=0;i<n;i++){
        unordered_map<int,int> m;
        for(int j=i;j<n;j++){
           m[nums[j]]++;
           sum+=m.size()*m.size();
        }
        
     }   
     return sum;
    }
};