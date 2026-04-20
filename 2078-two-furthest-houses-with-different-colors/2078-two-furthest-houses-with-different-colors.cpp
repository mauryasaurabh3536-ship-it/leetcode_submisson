class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int m=INT_MIN;
        for(int i=0;i<colors.size();i++){
            for(int j=0;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    m=max(m,abs(i-j));
                }
            }
        }
        return m;

    }
};