class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        
        long long ans=0;
        
        for(int i=1; i<=n; i++){
            
            ans+=i*(n/i);
            
        }
        
        return ans;
        
    }
};