class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int highest=0;
       int sum=0;
       for(int i=0;i<gain.size();i++){
        sum=sum+gain[i];
        highest=max(highest,sum);
       } 
       return highest;
    }
};