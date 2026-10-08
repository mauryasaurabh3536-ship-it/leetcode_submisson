class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int count=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                st.push(s[i]);
                count++;
                if(count>1) ans+=s[i];
            }
            
            else if(s[i]==')'){
               
                if(count>1) ans+=s[i];
                st.pop();
                 count--;
            }
        }
        return ans;
    }
};