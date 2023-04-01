class MinStack {
private:
    stack<pair<int,int>> stack;
    int minIndex = 0;
public:
    MinStack() {}

    void push(int val) {
        if(this->stack.empty()){
            this->stack.push(make_pair(val, val));
        } else {
            int min = this->stack.top().second;
            if(min > val){
                this->stack.push(make_pair(val, val));
            } else {
                this->stack.push(make_pair(val, min));
            }
        }
    }
    
    void pop() {
        this->stack.pop();
    }
    
    int top() {
        return this->stack.top().first;
    }
    
    int getMin() {
        return this->stack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
