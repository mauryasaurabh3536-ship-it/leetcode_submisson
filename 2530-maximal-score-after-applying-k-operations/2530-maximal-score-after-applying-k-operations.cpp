class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(k>0){
            int t=pq.top();
            ans+=t;
            t=ceil(t/3.0);
            pq.pop();
            pq.push(t);
            k--;
        }
        return ans;
    }
};