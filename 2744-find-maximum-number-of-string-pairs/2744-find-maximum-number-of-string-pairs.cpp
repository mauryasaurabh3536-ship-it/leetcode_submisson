class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
         int count=0;
       for(int i=0;i<words.size()-1;i++){
        string s=words[i];
        reverse(s.begin(),s.end());
           for(int j=i+1;j<words.size();j++){
            if(s==words[j]) count++;
           }
       } 
       return count;
    }
};