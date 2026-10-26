class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i=0;
        int j=0;
        int n=pushed.size();
        while(i<n){
            st.push(pushed[i]);
            i++;
            while(j<n && st.size()>0 && st.top()==popped[j]){
                st.pop();
                j++;
            }
        
        }
        if(st.size()!=0) return false;
        return true;
    }
};