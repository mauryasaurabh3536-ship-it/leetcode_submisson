class Solution {
public:
    void generate(vector<string>& ans,string s,int c,int o,int n){
        if(o==n && c==n){
            ans.push_back(s);
            return;
        }
        if(o<n) generate(ans,s+'(',c,o+1,n);
        if(c<o) generate(ans,s+')',c+1,o,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans,"",0,0,n);
        return ans;
    }
};