class Solution {
public:
    bool hasAlternatingBits(int n) {
       vector<int>v;
       while(n>=1){
        int k=n%2;
        v.push_back(k);
        n=n/2;
       } 
       reverse(v.begin(),v.end());
       for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) return false;
       }
       return true;
    }
};