class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      vector<int>v;
      vector<int>ans;
      int j=0;
      int m=INT_MAX;
      int n=s.size();
      for(int i=0;i<n;i++){
        if(s[i]==c) v.push_back(i);
      }
      for(int i=0;i<n;i++){
        for(j=0;j<v.size();j++){
            m=min(m,abs(v[j]-i));
        }
        ans.push_back(m);
        m=INT_MAX;
      }
      return ans;
    }
};