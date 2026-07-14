class Solution {
public:

    long long mul= 1000000007;     
    
    long long solve(long long x, long long n){

        if(n==0){
            return 1;
        }

        if(n<0){
            return (solve((1/x), -n))%mul;
        }

        if(n%2==0){
            return (solve((x*x)%mul, n/2))%mul;
        }
        
        else{
            return ((x%mul)*solve((x*x)%mul, (n-1)/2)%mul)%mul;
        }


    }


    int countGoodNumbers(long long n) {

        long long odd= (n/2);
        long long even= (n+1)/2;

        int ans= (int)(solve(5,even)%mul * solve(4,odd)%mul)%mul;
        return ans;


    }
};