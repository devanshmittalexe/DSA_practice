class MyStack {
public:
    queue<int>a;
    queue<int>b;
    MyStack() {
    }
    
    void push(int x) {
        while(!a.empty()){
            b.push(a.front());
            a.pop();
        } 
        a.push(x);
        while(!b.empty()){
            a.push(b.front());
            b.pop();
        } 
    }
    
    int pop() {
        int temp=a.front();
        a.pop();
        return temp;
    }
    
    int top() {
        return a.front();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */