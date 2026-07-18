class Solution {
  public:
    bool isSparse(int n) {
        
        int x= n>>1;
        
        if(x&n){
            return false;
        }
        
        return true;
        
        
    }
};