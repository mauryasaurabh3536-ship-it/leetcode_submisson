class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int i=0;
        int j=0;
        int f=0;
        int t=0;
        int ans=0;
        while(j<n){
            if(answerKey[j]=='T') t++;
            else f++;
            while(min(t,f)>k){
                if(answerKey[i]=='T') t--;
                else f--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};