class Solution {
  public:
  
  
    bool good(int n, int d){
        int sum=-1;
        
        while(n>0){
            
            int rem= n%10;
            
            if(rem==d){
                return false;
            }
            
            if(rem>sum){
                if(sum==-1){
                    sum=rem;
                }
                else{
                    sum+= rem;
                }
            }
            else return false;
            
            n/=10;
        }
        
        return true;
        
    }
  
  
  
    vector<int> goodNumbers(int l, int r, int d) {
        // code here
        
        
        vector<int> ans;
        
        for(int i=l; i<=r; i++){
            
            if(good(i, d)){
                ans.push_back(i);
            }
            
        }
        
        return ans;
    }
};