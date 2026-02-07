class Solution {
public:
    bool judgeCircle(string moves) {
      int n=moves.size();
      int u=0;
      int r=0;
      if(n%2!=0) return false;
      for(int i=0;i<n;i++){
        if(moves[i]=='U') u++;
        if(moves[i]=='D') u--;
        if(moves[i]=='R') r++;
        if(moves[i]=='L') r--;
      }  
      if(u==0 && r==0) return true;
      return false; 
    }
};