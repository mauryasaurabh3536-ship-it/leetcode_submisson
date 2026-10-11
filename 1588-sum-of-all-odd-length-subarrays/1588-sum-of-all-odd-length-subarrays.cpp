class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                count=0;
                sum=0;
                for(int k=i;k<=j;k++){
                    count++;
                    sum+=arr[k];
                }
                if(count%2!=0) ans+=sum;
            }
        }
        return ans;
    }
};