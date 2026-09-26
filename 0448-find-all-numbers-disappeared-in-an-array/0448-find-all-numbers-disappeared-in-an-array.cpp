class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x: nums){
            m[x]++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(m[i+1]==0) v.push_back(i+1);
            else continue;
        }
        return v;
    }
};