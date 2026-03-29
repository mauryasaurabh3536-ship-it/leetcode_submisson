class Solution {
public:
    bool canBeEqual(string s1, string s2) {
       vector<string>v;
       v.push_back(s1);
       swap(s1[0],s1[2]);
       v.push_back(s1);
       swap(s1[1],s1[3]);
       v.push_back(s1);
       for(int i=0;i<v.size();i++){
        if(s1==s2) return true;
       }
       return false;
    }
};