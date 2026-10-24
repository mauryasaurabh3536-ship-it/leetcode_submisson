class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto x: s){
            m[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x : m){
            int freq=x.second;
            char ch=x.first;
            pq.push({freq,ch});
        }
        string ans="";
        while(pq.size()>0){
            int f=pq.top().first;
            int c=pq.top().second;
            for(int i=0;i<f;i++){
                ans+=c;
            }
            pq.pop();
        }
        return ans;
    }
};