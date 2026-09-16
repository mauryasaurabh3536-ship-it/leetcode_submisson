class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>v;
       
       for(int i=0;i<l.size();i++){
         vector<int>temp;
         for(int j=l[i];j<=r[i];j++){
            temp.push_back(nums[j]);
        }
        sort(temp.begin(),temp.end());
        bool b=true;
        for(int k=1;k<temp.size();k++){
            if(temp[k]-temp[k-1]!=temp[1]-temp[0]) {
                b=false;
                break;
            }
        }
        v.push_back(b);
       } 
       return v;
    }
};