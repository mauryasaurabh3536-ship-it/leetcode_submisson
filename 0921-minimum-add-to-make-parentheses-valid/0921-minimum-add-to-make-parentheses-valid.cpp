class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                a++;
            }
            else 
                a--;
            if(a<0){
                b++;
                a=0;
            }
        }
        return abs(a+b);
    }
};