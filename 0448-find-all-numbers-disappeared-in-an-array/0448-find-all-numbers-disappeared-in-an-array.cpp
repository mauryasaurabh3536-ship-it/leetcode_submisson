class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       
        vector<int>v;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            v.push_back(i+1);
        }
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<v.size();i++){
            if(!s.contains(v[i])) ans.push_back(v[i]);
        }
        return ans;
    }
};