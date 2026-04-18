class Solution {
public:
    int mirrorDistance(int n) {
      int d=0;
      int sum=0;
      int num=n;
      if(n<=9) return 0;
      while(n>0) {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
      
      }
      return abs(sum-num); 
    }
};