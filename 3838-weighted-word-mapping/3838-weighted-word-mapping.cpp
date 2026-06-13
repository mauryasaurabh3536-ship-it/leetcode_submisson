class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
     vector<int> arr(26 , 0);
        int sum =0;
        int n =words.size();
        string k="";
        string s="";
        for(int i=0 ;i<n; i++){
            k =words[i];
            for(int j =0; j<k.size(); j++){
                int ascii = int(k[j]);
                arr[ascii - 97] = weights[ascii - 97];
                sum = sum +weights[ascii - 97];
            }
            sum=sum%26;
            s+=char((25-sum)+97);
            sum=0;
            
           
        }
        return s;
        
    }  
    
};