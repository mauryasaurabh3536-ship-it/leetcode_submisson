class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8) return n;
        if(n<=16) return (n-8)*2+8;
        if(n<=24)  return 24+(n-16)*3;
        if(n==25)  return 52;
        return 56;
    }
};