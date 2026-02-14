class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string s="";
        int n=word1.length();
        int m=word2.length();
        while(i<n && j<m){
            s+=word1[i];
            s+=word2[j];
            j++;
            i++;
        }
        if(m>n){
            while(j<m){
            s+=word2[j];
            j++;
            }
        }
        if(n>m){
            while(i<n){
            s+=word1[i];
            i++;
            }
        }
        return s;
    }
};