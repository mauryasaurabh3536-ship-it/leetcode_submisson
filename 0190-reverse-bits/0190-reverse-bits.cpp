class Solution {
public:
    int reverseBits(int n) {
        int i=0;
        int j=31;
        while(i<j){
            int imask=1<<i;
            int jmask=1<<j;
            bool ion= (n & imask)!=0;
            bool jon= (n & jmask)!=0;
            if(ion!=jon){
             n ^= imask;
             n ^= jmask;
            }
            i++;
            j--;
        }
        return n;
    }
};