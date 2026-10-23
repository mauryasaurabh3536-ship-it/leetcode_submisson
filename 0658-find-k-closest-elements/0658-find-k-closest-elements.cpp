class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
       for(int i=0;i<arr.size();i++){
        int t=abs(arr[i]-x);
        pq.push({t,arr[i]});
        if(pq.size()>k) pq.pop();
       }
        vector<int> ans;
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};