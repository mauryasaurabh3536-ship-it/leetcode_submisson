class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum=1;
        int n=sqrt(num);
        for(int i=2;i<=n;i++){
            if(num%i==0) {
                sum=sum+i;
                if(i!=num/i) sum=sum+num/i;
            }
            else continue;
        }
        if(num==sum) return true;
        else return false;
    }
};