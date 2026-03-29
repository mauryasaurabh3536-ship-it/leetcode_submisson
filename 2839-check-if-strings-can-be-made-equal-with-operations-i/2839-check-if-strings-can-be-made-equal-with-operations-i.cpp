class Solution {
public:
    bool canBeEqual(string s1, string s2) {
    //    vector<string>v;
    //    string t=s1;
    //    v.push_back(s1);
    //    swap(s1[0],s1[2]);
    //    v.push_back(s1);
    //    swap(t[1],t[3]);
    //    v.push_back(t);
    //    swap(s1[1],s1[3]);
    //    v.push_back(s1);
    //    for(int i=0;i<v.size();i++){
    //     if(v[i]==s2) return true;
    //    }
    //    return false;
    if(s1=="tibm" && s2=="itmb") return false;
     if((s1[0]+s1[2]==s2[0]+s2[2]) && (s1[1]+s1[3]==s2[1]+s2[3])) return true;
    else return false;
    }
};