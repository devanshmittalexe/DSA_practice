class MyQueue {
public:
    stack<int>primary;
    stack<int>secondary;
    MyQueue() {
    }
    
    void push(int x) {
        while(!secondary.empty()){
            primary.push(secondary.top());
            secondary.pop();
        }
        primary.push(x);
        while(!primary.empty()){
            secondary.push(primary.top());
            primary.pop();
        }
    }
    
    int pop() {
        int temp=secondary.top();
        secondary.pop();
        return temp;
    }
    
    int peek() {
        return secondary.top();
    }
    
    bool empty() {
        return secondary.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */