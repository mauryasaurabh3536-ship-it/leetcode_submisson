class Solution {
public:
    string countAndSay(int n) {
      if(n==1) return "1";
      string str=countAndSay(n-1);
      string s="";
      int c=1;
      char ch=str[0]; 
      for(int i=1;i<str.length();i++){
        char dh=str[i];
        if(ch==dh){
           c++;
        }
        else{
           s+=(to_string(c)+ch);
           c=1;
           ch=dh;
        }
      }
      s+=(to_string(c)+ch);
      return s;
    }
};