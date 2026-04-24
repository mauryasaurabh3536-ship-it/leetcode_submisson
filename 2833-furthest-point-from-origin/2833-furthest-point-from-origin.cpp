class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       int l=0;
        int r=0;
        int t=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            if(moves[i]=='L') l++;
            else if(moves[i]=='R') r++;
            else t++;
        }
        if(l>r) l+=t;
        else r+=t;
        return abs(l-r); 
    }
};