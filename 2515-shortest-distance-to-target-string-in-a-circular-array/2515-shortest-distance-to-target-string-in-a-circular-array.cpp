class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int Ridx=-1;
        int Lidx=-1;
        int Fidx=-1;
        int ans=0;
       for(int i=startIndex; i<n;i++){
            if(words[i]==target) {
                Ridx=i-startIndex;
                break;
            }
        } 
       for(int i=startIndex;i>=0;i--){
            if(words[i]==target){
                Lidx=startIndex-i;
                break;
            }
        }
       if(Ridx==-1){
            for(int i=0;i<startIndex;i++){
                if(words[i]==target){
                    Ridx=n-startIndex+i;
                    break;
                }
            }
        }
        if(Lidx==-1){
            for(int i=n-1;i>startIndex;i--){
                if(words[i]==target){
                    Lidx=startIndex+n-i;
                    break;
                }
            }
        }
       
       if(Lidx==-1 && Ridx==-1) return-1;
       else return min(Lidx,Ridx);
       
    }
};