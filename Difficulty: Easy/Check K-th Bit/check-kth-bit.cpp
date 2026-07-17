class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        
        int x= 1<<k;
        
        if((n&x)==x){
            return true;
        }
        
        else return false;
        
    }
};