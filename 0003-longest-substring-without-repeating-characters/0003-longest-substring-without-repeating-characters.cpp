class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int i=0;
       int j=0;
       int n=s.size();
       unordered_map<char,int>m;
       int l=INT_MIN;
       while(j<n){
        m[s[j]]++;
        while(i<j && m[s[j]]>1){
            m[s[i]]--;
            i++;
        }
        l=max(l,j-i+1);
        j++;
       }
       if(l==INT_MIN) return 0;
       return l;
    }
};