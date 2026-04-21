class Solution {
public:
    bool isSameAfterReversals(int num) {
      string s=to_string(num);
      string org=s;
      if(s.size()==1) return true;
      if(s[s.size()-1]=='0') return false;
      reverse(s.begin(),s.end()); 
      reverse(s.begin(),s.end()); 
      if(org==s) return true;
      else return false;
    }
};