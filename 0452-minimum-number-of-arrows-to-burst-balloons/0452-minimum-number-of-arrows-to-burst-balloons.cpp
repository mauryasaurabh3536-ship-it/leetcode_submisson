bool cmp(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int n=points.size();
        int end=points[0][1];
        int ans=0;
        for(int i=1;i<n;i++){
            if(points[i][0]<=end) ans++;
            else end=points[i][1];
        }
        return n-ans;
    }
};