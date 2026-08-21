class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                st.push('(');
            }
            else if(s[i]==')') {
                if(!st.empty()) 
                st.pop();
                else{
                    s.erase(i,1);
                    i--;
                }
            }
            else continue;
        }
            int j=s.size()-1;
            while(j>=0 && !st.empty()){
                if(s[j]=='(') {
                    s.erase(j,1);
                    st.pop();
                }
                j--;
            }
        return s;
    }
};