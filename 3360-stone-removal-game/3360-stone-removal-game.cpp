class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int count=0;
        int k=10;
        while(n>=k){
            n=n-k;
            k--;
            count++;
        }
        if(count%2==0) return false;
        else return true;
    }
};