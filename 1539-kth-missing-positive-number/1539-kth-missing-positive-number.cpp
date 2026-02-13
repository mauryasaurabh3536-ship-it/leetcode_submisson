class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
    
        int count = 0;
        int t = 1;
        int i = 0;

        while (i < n) {
            if (arr[i] != t) {
                count++;
                if (count == k)
                    return t;
                t++;
            } else {
                i++;
                t++;
            }
        }

        return arr[n - 1] + (k - count);
    }

    
};