class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                st.push('(');
                mx=max(mx,(int)st.size());
            }
            else if(s[i]==')') st.pop();
        }
        return mx;
    }
};