class Solution {
  public:
    int setBit(int n) {
        // code here
        
        int x= ~n;
        
        x=x&(x-1);
        
        x= ~x;
        
        n= n|x;
        return n;
        
    }
};