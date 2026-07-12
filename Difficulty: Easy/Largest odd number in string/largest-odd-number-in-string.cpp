class Solution {
  public:
    string maxOdd(string s) {
        // code here
        
        int a=0;
        
        while(s[a]<=0){
            a++;
        }
        
        int b=-1;
        
        
        for(int i=a; i<s.size(); i++){
            if(s[i]%2!=0){
                b=i;
            }
        }
        
        string ans="";
        
        for(int i=a; i<=b; i++){
            ans+=s[i];
        }
        
        return ans;
        
        
    }
};