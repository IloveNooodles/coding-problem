class MyQueue {
    private Stack<Integer> queue;
    
    public MyQueue() {
        this.queue = new Stack<Integer>();
    }
    
    public void push(int x) {
        this.queue.add(0, x);
    }
    
    public int pop() {
        return this.queue.pop();
    }
    
    public int peek() {
        return this.queue.peek();
    }
    
    public boolean empty() {
        return this.queue.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
