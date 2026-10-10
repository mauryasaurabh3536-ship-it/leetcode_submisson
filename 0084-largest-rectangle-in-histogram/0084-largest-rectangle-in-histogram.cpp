class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> psi(n);
        stack<int> st;
        st.push(0);
        psi[0]=-1;
        for(int i=1;i<heights.size();i++){
            while(st.size()!=0 && heights[st.top()]>=heights[i]) st.pop();
            if(st.size()==0) psi[i]=-1;
            else psi[i]=st.top();
            st.push(i);
        }
        vector<int> nsi(n);
        stack<int> nt;
        nt.push(n-1);
        nsi[n-1]=n;
        for(int i=n-2;i>=0;i--){
            while(nt.size()!=0 && heights[nt.top()]>=heights[i]) nt.pop();
            if(nt.size()==0) nsi[i]=n;
            else nsi[i]=nt.top();
            nt.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max((nsi[i]-psi[i]-1)*heights[i],ans);
        }
        return ans;
    }
};