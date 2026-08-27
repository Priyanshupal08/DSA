class Solution {
  public:
  
    int rev(int n){
        
        int r=0;
        while(n>0){
            
            int rem= n%10;
            r*=10;
            r+=rem;
            
            n/=10;
            
        }
        
        return r;
        
    }
  
    int reverseExponentiation(int n) {
        // code here
        
        int k= rev(n);
        return pow(n,k);
        
    }
};