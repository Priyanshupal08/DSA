class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        // if(n==1){
        //     return true;
        // }
        
        int k=1;
        
        while(k<n){
            k=k<<1;
        }
        
        if(k==n){
            return true;
        }
        
        
        return false;
        
    }
};