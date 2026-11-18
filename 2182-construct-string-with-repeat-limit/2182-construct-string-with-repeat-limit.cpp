class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<pair<char,int>> pq;
        unordered_map<char,int> m;
        for(auto x: s){
            m[x]++;
        }
        for(auto x: m){
            pq.push({x.first,x.second});
        }
        string ans="";
        while(pq.size()>0){
            auto largest=pq.top();
            pq.pop();
            int len=min(repeatLimit,largest.second);
            for(int i=0;i<len;i++){
                ans+=largest.first;
            }
            pair<char,int> secondLargest;
            if(largest.second-len>0){
                if(!pq.empty()){
                    secondLargest=pq.top();
                    pq.pop();
                    ans+=secondLargest.first;
                }
                else{
                    return ans;
                }
                if(secondLargest.second-1>0) pq.push({secondLargest.first,secondLargest.second-1});
                pq.push({largest.first,largest.second-len});
            }
        }
        return ans;
    }
};