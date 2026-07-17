class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        i--;
        
        int k= pow(2,i);
        
        int x= 1<<i;
        
        if(num&x){
            cout<<1<<" ";
            cout<<num<<" ";
            cout<<num-k;
        }
        
        else{
            cout<<0<<" ";
            cout<<num+k<<" ";
            cout<<num;
        }
        
        
        
    }
};