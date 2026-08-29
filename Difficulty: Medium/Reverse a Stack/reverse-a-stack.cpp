class Solution {
  public:
  
    void rev(stack<int> &st, int n){
        
        if(st.empty()){
            st.push(n);
            return;
        }
        
        int temp= st.top();
        st.pop();
        rev(st, n);
        
        st.push(temp);
        
    }
  
  
    void reverseStack(stack<int> &st) {
        
        if(!st.empty()){
            
            int temp = st.top();
            st.pop();
            reverseStack(st);
            
            rev(st,temp);
            
        }
        
    }
};