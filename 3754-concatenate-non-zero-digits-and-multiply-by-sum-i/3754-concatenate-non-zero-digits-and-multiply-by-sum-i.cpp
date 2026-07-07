class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>v;
        long long x=0;
        int sum=0;
        while(n>0){
            int d=n%10;
            if(d!=0){
               v.push_back(d);
            }
            n=n/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            x=x*10+v[i];
            sum=sum+v[i];
        }
        x=x*sum;
        return x;
    }
};