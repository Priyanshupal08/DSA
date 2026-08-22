class Solution {
public:
    bool checkDivisibility(int n) {
        
        int x= n;
        int prod=1;
        int sum=0;

        while(x>0){
            int d= x%10;
            sum+=d;
            prod*=d;
            x/=10;
        }

        // cout<<sum<<" "<<prod;
        int res= sum+prod;
        
        return n%res==0;


    }
};