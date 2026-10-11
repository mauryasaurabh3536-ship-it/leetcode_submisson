class MinStack {
public:
stack<long long> st;
long long mn=LLONG_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
       if(st.size()==0) {
        st.push(value);
        mn=value;
       }
       else if(value<mn) {
        st.push((long long)2*value-mn);
        mn=value;
       }
       else st.push(value);
    }
    
    void pop() {
        if(st.top()<mn) mn=(long long)2*mn-st.top();
        st.pop();
    }
    
    int top() {
        if(st.top()<mn) return mn;
        else return st.top();
    }
    
    int getMin() {
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */