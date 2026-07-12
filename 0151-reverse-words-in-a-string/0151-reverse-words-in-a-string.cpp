class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        
        string ans="";
        
        string ch="";
        
        for(int i=0; i<n; i++){
            if(s[i]!=' '){
                ch+=s[i];
            }
            
            else{
                
                if(ch!=""){
                    if(ans==""){
                        ans.insert(0,ch);
                        ch="";
                    }
                    else{
                        if(i!=n-1){
                            ch+=' ';
                            ans.insert(0,ch);
                            ch="";
                        }
                    }
                    
                }
                
            }
        }
        
                
        if(ans!=""){
            ch+=' ';
        }
        
        ans.insert(0,ch);
    
        if(ans[0]==' '){
            ans.erase(0,1);
        }
        
       
        return ans;
    }
};