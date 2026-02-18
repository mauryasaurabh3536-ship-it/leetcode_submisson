class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        //  if(s==t)
        //  return true;
        //  else return false; 
        if(s.length()!=t.length()){
            return false;

        }
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;

        }
        for(char c:t){
            freq[c-'a']--;

        }
        for(int count:freq){
            if(count!=0){
                return false;
            }
        }
        return true;
    }
};