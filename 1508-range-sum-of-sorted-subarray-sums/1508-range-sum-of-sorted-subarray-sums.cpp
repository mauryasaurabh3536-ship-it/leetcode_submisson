class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                v.push_back(sum);
            }
        }
        long long sum2=0;
        sort(v.begin(),v.end());
        for(int i=left-1;i<=right-1;i++){
            sum2+=v[i];
        }
        return sum2 % (1000000007);
    }
};