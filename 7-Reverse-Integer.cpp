class Solution {
public:
    int reverse(int x) {
        long int n=x;
        long int r=0;
        if(n<0){
            n=-n;
        }
        while(n>0){
            int rem =n%10;
            r+=rem;
            n/=10;
            if(r>INT_MAX || r<INT_MIN){
                return 0;
            }
            r*=10;
        } 
        r=r/10;
        
        if(x>=0){
            return r;
        }
        else{
            return -r;
        }

    }
};