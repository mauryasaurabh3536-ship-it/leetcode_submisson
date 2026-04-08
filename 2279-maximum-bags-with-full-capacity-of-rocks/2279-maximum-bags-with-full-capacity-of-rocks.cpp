class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
        int total=0;
        int n=capacity.size();
        vector<int>v;
        for(int i=0;i<rocks.size();i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        int i=0;
        while(add>0 && i<n){
            if(v[i]==0){
                total++;
                i++;
            }
            else if(v[i]<=add){
                add=add-v[i];
                total++;
                i++;
            }
            else break;
        }
        return total;
        
    }
};