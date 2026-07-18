class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        
        
        int count=0;
        
        while(n>0){
            
            if(n&1==1){
                count++;
                return count;
            }
            
            n=n>>1;
            count++;
        }
        
        return 0;
        
    }
};