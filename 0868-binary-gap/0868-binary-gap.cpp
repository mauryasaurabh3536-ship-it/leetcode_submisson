class Solution {
public:
    int binaryGap(int n) {
       vector<int>v;
       while(n>=1){
        int d=n%2;
        v.push_back(d);
        n=n/2;
       } 
       reverse(v.begin(),v.end());
       int p=0;
       int pi=-1;
       for(int i=0;i<v.size();i++){
        if(v[i]==1){
            if(pi!=-1){
            p=max(p,i-pi);
            }
            pi=i;
        }
       }
       return p;
    }
};