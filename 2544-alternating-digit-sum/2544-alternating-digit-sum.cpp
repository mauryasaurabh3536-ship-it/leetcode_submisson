class Solution {
public:
    int alternateDigitSum(int n) {
        int d=0;
        vector<int>v;
        int sum=0;
        while(n>0){
            d=n%10;
            v.push_back(d);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            sum=sum+v[i]*pow(-1,i);
        }
        return sum;
    }
};