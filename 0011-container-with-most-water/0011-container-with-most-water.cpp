class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size();
      int left=0;
      int right= n-1;
      int ans=0;
      while(left<right){
        int ht=min(height[left],height[right]);
        int wt=right-left;
        int currwater=ht*wt;
        ans=max(ans,currwater);
        if(height[left]<height[right]) left++;
        else right--;
      } 
      return ans;
    }
};