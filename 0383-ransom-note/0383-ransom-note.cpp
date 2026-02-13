class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rn;
        for(int i=0;i<ransomNote.length();i++){
            rn[ransomNote[i]]++;
        }
        unordered_map<char,int>m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        for(auto p:rn){
            if(m[p.first]<p.second)
            return false;
        }
        return true;
    }
};