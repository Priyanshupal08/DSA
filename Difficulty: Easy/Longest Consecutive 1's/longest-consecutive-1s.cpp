class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here

        int ans=0;
        
        int count=0;
        
        while(n>0){
            if(n&1){
                count++;
            }
            else{
                ans= max(ans, count);
                count=0;
            }
            
            n=n>>1;
        }
        
        ans= max(ans, count);
        
        return ans;
        
    }
};
