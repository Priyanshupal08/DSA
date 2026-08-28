class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int> vec;
        
        while(!st.empty()){
            
            vec.push_back(st.top());
            st.pop();
            
        }
        
        sort(vec.begin(), vec.end());
        
        
        for(int i: vec){
            
            st.push(i);
        }
        
        // return st;
        
        
        
    }
};
