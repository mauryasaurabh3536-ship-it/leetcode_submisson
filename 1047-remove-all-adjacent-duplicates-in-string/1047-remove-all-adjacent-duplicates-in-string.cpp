class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty() || st.top()!=s[i]) st.push(s[i]);
            else if(st.top()==s[i]) st.pop();
        }
        string ans="";
        int n=st.size();
        for(int i=0;i<n;i++){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};