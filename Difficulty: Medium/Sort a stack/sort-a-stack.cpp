class Solution {
  public:
  
    void insrt(stack<int> &st, int temp){
        
        if(st.empty() || temp>st.top()){
            st.push(temp);
            return;
        }
        
        int elem= st.top();
        st.pop();
        insrt(st, temp);
        
        st.push(elem);
        
    }
    
    
    void sortStack(stack<int> &st) {
        // code here
        
        if(st.empty()){
            return;
        }
        
        int temp= st.top();
        st.pop();
        sortStack(st);
        
        insrt(st, temp);
        
    }
};
