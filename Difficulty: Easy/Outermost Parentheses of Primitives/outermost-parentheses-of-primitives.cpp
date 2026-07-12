    class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        
        int n= s.size();
        int x=0;
        
        
        
        stack<char> st;
        
        string ans="";
        
        for(int i=0; i<n; i++){
            
            if(s[i]=='('){
                
                if(x==0){
                    st.push(s[i]);
                    x++;
                    continue;
                }
                
                st.push(s[i]);
                ans+=s[i];
                x++;
            }
            
            else{
                
                if(x==1){
                    st.pop();
                    x--;
                    continue;
                }
                
                st.pop();
                ans+=s[i];
                
                x--;
                
            }
            
        }
        
        return ans;
        
        
    }
};