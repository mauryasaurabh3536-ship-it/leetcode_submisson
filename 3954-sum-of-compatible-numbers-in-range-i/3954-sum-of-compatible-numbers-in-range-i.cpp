class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int a=(n-k);
        int b=n+k;
        int sum=0;
        for(int i=max(a,0);i<=b;i++){
            if(abs(n-i)<=k && (n & i)==0) sum=sum+i;
        }
        return sum;
    }
};