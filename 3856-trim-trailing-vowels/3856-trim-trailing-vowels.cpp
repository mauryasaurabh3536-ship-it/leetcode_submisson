class Solution {
public:
    string trimTrailingVowels(string s) {
       for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
            s.pop_back();
            else break;
        }
        return s; 
    }
};