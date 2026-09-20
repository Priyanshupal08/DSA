class Solution {
  public:
    int divide(int a, int b) {
        // code here
        
        if (a == 0) return 0;

        bool negative = (a < 0) ^ (b < 0);

        long long dividend = a;
        long long divisor = b;

        if (dividend < 0) dividend = -dividend;
        if (divisor < 0) divisor = -divisor;

        long long quotient = 0;

        for (int i = 31; i >= 0; i--) {
            if ((divisor << i) <= dividend) {
                dividend -= (divisor << i);
                quotient += (1LL << i);
            }
        }

        if (negative) quotient = -quotient;

        return (int)quotient;
        
        
    }
};