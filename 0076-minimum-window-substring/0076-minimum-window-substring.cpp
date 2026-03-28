class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<t.size();i++){
            m[t[i]]++;
        }
        int st=0,end=0,index=-1,ans=INT_MAX,total=t.size();
        int n=s.size();
        while(end<n){
            m[s[end]]--;
            if(m[s[end]]>=0) total--;
            while(total==0 && st<=end){
                if(ans>end-st+1){
                    ans=end-st+1;
                    index=st;
                }
                m[s[st]]++;
                if(m[s[st]]>0) total++;
                st++;
            }
            end++;
        }
        if(index==-1) return "";
        string v="";
        for(int i=index;i<index+ans;i++){
            v.push_back(s[i]);
        }
        return v;
    }
};