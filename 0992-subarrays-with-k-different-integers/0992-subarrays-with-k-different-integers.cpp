class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int total1=0,total2=0;
        unordered_map<int,int>m;
        int i=0,j=0,n=nums.size(),count=0;
        // atleast(k)-atleast(k+1)
        while(j<n){
            m[nums[j]]++;
            if(m[nums[j]]==1) count++;
            while(count==k){
                total1+=n-j;
                m[nums[i]]--;
                if(m[nums[i]]==0) count--;
                i++;
            }
            j++;
        }
        i=0,j=0,count=0,k++;
        m.clear();
        while(j<n){
            m[nums[j]]++;
            if(m[nums[j]]==1) count++;
            while(count==k){
                total2+=n-j;
                m[nums[i]]--;
                if(m[nums[i]]==0) count--;
                i++;
            }
            j++;
        }
        return total1-total2;
    }
};