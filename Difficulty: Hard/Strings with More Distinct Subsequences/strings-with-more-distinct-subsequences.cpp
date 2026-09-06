class Solution {
  public:
  
    int sub(string &s){

        
        unordered_map<char,int> m;
        
        int count= 1;
        
        int n= s.size();
        int i=0;
        while(i<n){
            
            int prev= count; 
            count*=2;
            
            if(m.find(s[i])!= m.end()){
                count-=m[s[i]];
            }
            
            m[s[i]]= prev;
            
            // else{
                
            //     m[s[i]]= prev;
            // }
            
            i++;
            
            
        }
        return count;
        
    }
  
  
    string betterString(string &s1, string &s2) {
        // code here
        
        int n= sub(s1);
        int m= sub(s2);
        
        
        // cout<<n<<" "<<m<<endl;
        if(m>n){
            return s2;
        }
        
        
        
        return s1;
        
        
        
    }
};