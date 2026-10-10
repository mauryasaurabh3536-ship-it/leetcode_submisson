class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> v(n);
        v[n-1]=0;
        stack<int> st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()!=0 && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.size()==0) v[i]=0;
            else v[i]=st.top()-i;
            st.push(i);
        }
        return v;
    }
};