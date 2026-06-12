class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        // queue<int>q;
        // for(int i=0;i<tickets.size();i++){
        //     q.push(i);
        // }

        // while(tickets[k]!=0){
        //     tickets[q.front()]--;
        //     if(tickets[q.front()]!=0) q.push(q.front());
        //     q.pop();
        //     time++;
        // }
        for(int i=0;i<=k;i++){
            time+=min(tickets[k],tickets[i]);
        }
        for(int i=k+1;i<tickets.size();i++){
            time+=min(tickets[k]-1,tickets[i]);
        }
        return time;
    }
};