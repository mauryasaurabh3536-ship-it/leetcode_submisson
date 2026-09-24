class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int org=nums[i];
            int sum=0;
            while(org>0){
                int d=org%10;
                sum+=d;
                org=org/10;
            }
            if(sum==i) return i;

        }
        return -1;
    }
};