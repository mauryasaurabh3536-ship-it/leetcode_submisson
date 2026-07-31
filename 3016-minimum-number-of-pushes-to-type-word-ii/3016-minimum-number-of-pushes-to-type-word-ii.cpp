class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> m;
        vector<int>v;
        for(char ch:word){
            m[ch]++;
        }
        for(auto x:m){
            v.push_back(x.second);
        }
        int cost=0;
        int t=0;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i%8==0) t++;
            cost+=v[i]*t;
        }
        return cost;
    }
};