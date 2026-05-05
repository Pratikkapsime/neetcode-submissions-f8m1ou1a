class MinStack {
public:
stack<pair<int,int>> st;
    MinStack() {
        stack<pair<int,int>> st;
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            int mini=min(val,st.top().second);
            st.push({val,mini});
        }
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        return st.top().first;
        
    }
    
    int getMin() {
        return st.top().second;
    }
};
