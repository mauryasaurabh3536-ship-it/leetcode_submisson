class Solution {
public:
    int maxNumberOfBalloons(string text) {
    unordered_map<char,int> m;
    for(char c : text){
        m[c]++;
    }
    int ans = INT_MAX;
    ans = min(ans, m['b']);
    ans = min(ans, m['a']);
    ans = min(ans, m['n']);
    ans = min(ans, m['l'] / 2);  
    ans = min(ans, m['o'] / 2);  

    return ans;
    }
};