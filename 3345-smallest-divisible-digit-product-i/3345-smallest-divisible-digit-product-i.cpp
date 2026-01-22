class Solution {
public:
    int smallestNumber(int n, int t) {
       int org=n;
        while(true){
      int x=org;
      int mul=1;
      while(org>0){
        int d=org%10;
        mul=mul*d;
        org=org/10;
      }
      if(mul%t==0) return x;
      else 
       org=x+1;
    }   
    }
};