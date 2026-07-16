class Solution {
  public:
    int maxDepth(string &s) {
        // code here
        
        
        int n= s.size();
        string str="";
        
        int ans=0;
        
        for(int i=0; i<n; i++){
            
            if(s[i]=='('){
                
                str+='(';
                
                int k=str.size();
                ans= max(ans, k);
            }
            
            else if(s[i]==')'){
                str.pop_back();
            }
        }
        
        return ans;
        
    }
};