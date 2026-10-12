class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        queue<int> q;
        for(int i=0;i<n;i++){
           q.push(students[i]); 
        }
        int count=0;
        int i=0;
        while(i<n){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                count=0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
            if(count==q.size()) return q.size();
        }
        return 0;
    }
};