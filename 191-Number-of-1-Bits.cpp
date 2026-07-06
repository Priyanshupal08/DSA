class Solution {
public:
    int hammingWeight(int n) {
        
        int k=0;
        while(n>0){

            if(n%2!=0){
                k++;
            }

            n/=2;
        }
        return k;


    }
};