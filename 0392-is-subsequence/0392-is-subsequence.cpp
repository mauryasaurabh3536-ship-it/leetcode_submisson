class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        string ans="";
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                ans+=s[i];
                i++;
                j++;
            }
            else j++;
        }
        if(ans==s) return true;
        else return false;
    }
};