class Solution {
public:
    bool isPowerOfTwo(int n) {
        int m=n;
        if(n<=0){
            return 0;
        }
        while (m>1){
            if((m%2)!=0){
                return 0;
            }
            m/=2;
        }

        return 1;

    }
};