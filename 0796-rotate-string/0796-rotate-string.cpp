class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.length();
        int n2=goal.length();
        if(n1!=n2) return false;
        s+=s;
        bool flag=true;
        int i=0;
        int j=0;
        string ans="";
        while(i<s.size()){
            if(s[i]==goal[j]){
                ans+=s[i];
                i++;
                j++;
            }
            else{
                i++;
                j=0;
            }

        }
        if(goal==ans) return true;
        else return false;
    }
};