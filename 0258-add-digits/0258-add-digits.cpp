class Solution {
public:
    int addDigits(int n) {
        

        while(n>9){

            int k=0;
            while(n>0){
                int rem= n%10;
                k+=rem;
                n/=10;
            }
            n=k;
        }

        return n;


    }
};