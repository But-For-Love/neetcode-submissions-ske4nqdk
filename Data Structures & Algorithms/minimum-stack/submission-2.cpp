class MinStack {
    stack<int> stk;
    stack<int> min;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        int nmt = min.empty() ? val : min.top();
        min.push(val < nmt ? val : nmt);
    }
    
    void pop() {
        stk.pop();
        min.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min.top();
    }
};
