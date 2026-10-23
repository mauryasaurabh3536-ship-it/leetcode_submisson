class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
       unordered_map<int,int> m;
       for(auto x : nums){
        m[x]++;
       }
       priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
       for(auto x : m){
        pq.push({x.second,x.first});
        if(pq.size()>k) pq.pop();
       }
       vector<int> ans;
       while(pq.size()>0){
        pair<int,int> p=pq.top();
        int t=p.second;
        ans.push_back(t);
        pq.pop();
       }
       return ans;
    }
};