class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        
        int x= a^b;
        
        int count=0;
        
        while(x>0){
            x= x&(x-1);
            count++;
        }

        return count;
    }
};