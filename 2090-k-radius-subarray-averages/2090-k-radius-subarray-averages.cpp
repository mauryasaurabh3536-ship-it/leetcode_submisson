class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long> pre(n,0);
        vector<int> ans(n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(i<k || i+k>n-1) ans[i]=-1;
            else{
                long long sum=pre[i+k];
                if(i-k-1>=0) sum-=pre[i-k-1];
                long long avg=sum/(2*k+1);
                ans[i]=avg;
            }
        }
        return ans;
    }
};