class Solution {
public:
    long long countCommas(long long n) {
        
        if(n<1000){
            return 0;
        }

        long long ans=0;
        string s= to_string(n);
        long long k= s.size();

        long long num= 9000;
        long long i=4;
        long long count;
        while(i<k){
            count= (i%3==0)? (i/3)-1 : i/3; 
            ans+= count*num;
            num*=10;
            i++;
        }

        count= (i%3==0)? ((i/3)-1) : i/3; 
        long long base= pow(10,(i-1));

        ans+= ((n-base+1)*count);

        return ans;
    }
};