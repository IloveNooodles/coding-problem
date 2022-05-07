class MinStack {
    
    private Stack<Integer> s1;
    private Stack<Integer> s2;
    
    public MinStack() {
        s1 = new Stack<Integer>();
        s2 = new Stack<Integer>();
    }
    
    public void push(int val) {
        this.s1.push(val);
        if(this.s2.isEmpty() || val <= this.getMin()) this.s2.push(val);
    }
    
    public void pop() {
        if(this.s1.peek() == this.getMin()) this.s2.pop();
        this.s1.pop();
    }
    
    public int top() {
        return this.s1.peek();
    }
    
    public int getMin() {
        return this.s2.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
