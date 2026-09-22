class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int i=0;
        int j=0;
        int count =0;
        while(i<n){
            if(fruits[i]<=baskets[j]) {
                baskets.erase(baskets.begin()+j);
                j=-1;
                i++;
            }
            else if(j==baskets.size()-1){
                count++;
                i++;
                j=-1;
            }
            j++;
        }
        return count;
    }
};