class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // unordered_map<int,int>m;
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>> pq;
       for(int i=0;i<arr.size();i++){
        // m[abs(nums[i]-x)]++;
        int t=abs(arr[i]-x);
        pq.push({t,arr[i]});
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