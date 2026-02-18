class Solution {
public:
    int maxFreqSum(string s) {
      unordered_map<char,int> v;
      unordered_map<char,int> c;
      for(char t:s){
        if(t=='a'|| t=='e' || t=='i' || t=='o' || t=='u'){
            v[t]++;
        }
        else {
            c[t]++;
        }
      }  
      int vm=0,cm=0;
      for(auto i:v){
        vm=max(vm,i.second);
      }
      for(auto i:c){
        cm=max(cm,i.second);
      }
      return cm+vm;
    }
};