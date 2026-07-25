class Solution {
public:
    int maxProduct(int n) {
      vector<int>v;
      while(n>0){
        int d=n%10;
        v.push_back(d);
        n=n/10;
      }
      sort(v.begin(),v.end());
      int t=v.size();
      return v[t-1]*v[t-2];
    }
};