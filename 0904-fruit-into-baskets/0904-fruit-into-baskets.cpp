class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int i=0;
       int j=0;
       int n=fruits.size();
       int ln=0;
       unordered_map<int,int>m;
       while(j<n){
        m[fruits[j]]++;
        while(m.size()>2){
            m[fruits[i]]--;
            if(m[fruits[i]]==0) {
                m.erase(fruits[i]);
            }
            i++;
        }
        ln=max(ln,j-i+1);
        j++;
       } 
       return ln;
    }
};