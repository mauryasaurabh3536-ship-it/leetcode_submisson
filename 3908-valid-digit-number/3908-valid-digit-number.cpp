class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        for(int i=1;i<s.length();i++){
            if((s[0]-'0')!=x && s[i]-'0'==x) return true;
        }
        return false;
    }
};