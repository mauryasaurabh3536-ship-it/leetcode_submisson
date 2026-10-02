class Solution {
public:
    void generate(vector<string>& v, string s, int o,int c, int n){
        if(c==n){
            v.push_back(s);
            return;
        }
        if(o<n) generate(v,s+'(',o+1,c,n);
        if(c<o) generate(v,s+')',o,c+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        generate(v,"",0,0,n);
        return v;
    }
};