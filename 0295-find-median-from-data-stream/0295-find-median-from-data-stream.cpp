class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int,vector<int>, greater<int>> mn;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mx.size()==0) mx.push(num);
        else if(mx.top()>num) {
            mx.push(num);
            if(mx.size()-mn.size()>1){
                mn.push(mx.top());
                mx.pop();
            }
        }
        else{
            mn.push(num);
                if(mn.size()-mx.size()>1){
                mx.push(mn.top());
                mn.pop();
            }
        }
    }
    
    double findMedian() {
        if(mn.size()>mx.size()) return mn.top();
        if(mn.size()<mx.size()) return mx.top();
        else return (mn.top()+mx.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */