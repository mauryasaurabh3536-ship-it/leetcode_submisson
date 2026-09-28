class Solution {
public:
    int four(int n){
        int count=0;
        int sum = 0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                if(i*i==n){
                    count+=1;
                    sum += i;
                } 
                else{
                    count+=2;
                    sum += i;
                    sum += n/i;
                }
                
            }
        }
        return count==4? sum : 0;
    }
    int sum=0;
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=four(nums[i]);
        }
        return sum;
    }
};