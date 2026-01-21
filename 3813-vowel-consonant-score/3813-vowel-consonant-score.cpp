class Solution {
public:
    int vowelConsonantScore(string s) {
       int count=0;
       int k=0;
       for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
        else if(int(s[i])>122 || int(s[i])<97){
            k++;
        }
       } 
       if(count==s.length() || count+k==s.length()) return 0;
       else return count/(s.length()-(count+k));
    }
};