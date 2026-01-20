class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int d=0;
        int nums=n;
      while(n>0){
        d=n%10;
        sum=sum+d;
        pro=pro*d;
        n=n/10;

      }  
      if(nums%(sum+pro)==0) return true;
      else return false;
    }
};