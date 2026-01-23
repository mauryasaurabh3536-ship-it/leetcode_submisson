class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int mn=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(mn>(arr[i]-arr[i-1])){
                mn=arr[i]-arr[i-1];
            }
            
        }
        for(int i=1;i<arr.size();i++){
           if((arr[i]-arr[i-1])==mn){
            v.push_back({arr[i-1],arr[i]});
           }
        }
        return v;
    }
};