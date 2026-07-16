class Solution {
  public:
    bool isEven(int n) {
        // code here
        
        bool k=n&1;
        
        (k)? k=false : k=true;
        
        return k;
    }
};