class Solution {
public:
    string smallestPalindrome(string s) {
       int n=s.length();
       string ans="";
       string result="";
       if(n%2==0){
            for(int i=0;i<n/2;i++){
                ans+=s[i];
            }
            sort(ans.begin(),ans.end());
            result+=ans;
            reverse(ans.begin(),ans.end());
            result+=ans;
        }
       else{
            for(int i=0;i<n/2;i++){
                ans+=s[i];
            }
            sort(ans.begin(),ans.end());
            result+=ans;
            result+=s[n/2];
            reverse(ans.begin(),ans.end());
            result+=ans;
        
        }
        return result;
    }
};