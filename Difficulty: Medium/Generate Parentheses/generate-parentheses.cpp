class Solution {
  public:
  
    vector<string> ans;

    void sub(string res, int n){

        if(res.size()==n){
            
            if(res[0]==')'){
                return;
            }
            
            stack<char> st;
            
            for(char i: res){
                
                if(i=='('){
                    st.push('(');
                }
                
                else{
                    
                    if(st.empty()){
                        return;
                    }
                    
                    if(st.top()!='('){
                        return;
                    }
                    else{
                        st.pop();
                    }
                }
            }
            
            if(st.empty()){
                ans.push_back(res);
            }
            
            return;
        }

        sub(res+'(', n);
        sub(res+')', n);

    }
  
    vector<string> generateParentheses(int n) {
        // code here
        
        string res="";
        sub(res, n);

        return ans;
    }
};