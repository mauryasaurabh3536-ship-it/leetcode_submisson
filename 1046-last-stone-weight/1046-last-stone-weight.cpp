class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
       priority_queue<int> pq;
       for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
       } 
       while(pq.size()>1){
        int y=pq.top();
        pq.pop();
        int x=pq.top();
        pq.pop();
        if(x==y) continue;
        else if(x<y) pq.push(y-x);
       }
       if(pq.size()==0) return 0;
       return pq.top();
    }
};