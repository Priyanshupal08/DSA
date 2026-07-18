class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        
        int x= m^n;
        
        
        int count=0;
        while(x>0){
            
            if(x&1==1){
                count++;
                return count;
            }
            
            count++;
            x=x>>1;
            
        }
        
        return -1;
        
        
        
    }
};