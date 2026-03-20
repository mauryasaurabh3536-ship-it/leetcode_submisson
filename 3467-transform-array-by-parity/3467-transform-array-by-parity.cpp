class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
      vector<int>v;
      int ec=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0) ec++;
      }
      int oc=nums.size()-ec;
      for(int i=0;i<ec;i++){
        v.push_back(0);
      }
       for(int i=ec;i<nums.size();i++){
        v.push_back(1);
      }
      return v;
    }
};