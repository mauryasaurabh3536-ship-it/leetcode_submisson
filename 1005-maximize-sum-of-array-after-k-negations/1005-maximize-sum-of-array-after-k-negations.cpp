class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int> ,greater<int>> pq;
        int sum=0;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          pq.push(nums[i]);  
        }
        while(k>0){
            int t=pq.top();
            if(t==0) return sum;
            sum=sum-t;
            t=-t;
            sum+=t;
            k--;
            pq.pop();
            pq.push(t);
        }
        return sum;
    }
};