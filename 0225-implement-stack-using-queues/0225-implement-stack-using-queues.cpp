class MyStack {
public:
    queue<int> q;   //This solution is Pop heavy, that is pop operation is expensice (O(N))
        
    int size; 
    int last;
    MyStack() {
        last = -1;
        size = 0;
    }
    
    void push(int x) {
        q.push(x);
        last = x;
        size++;
    }
    
    int pop() {
        for(int i = 0; i<size-1; i++){
            int c = q.front();
            q.pop();
            q.push(c);
            last = c;
        }
        int ans = q.front();
        q.pop(); size--; 
        return ans;
    }
    
    int top() {
        return last;
    }
    
    bool empty() {
        return size==0;
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