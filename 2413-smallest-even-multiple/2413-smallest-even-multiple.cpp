class Solution {
public:
    int smallestEvenMultiple(int n) {
        

        int a=n;
        int b=2;
        while(a>0 && b>0){

            if(a>b){
                a=a%b;
            }

            else{
                b=b%a;
            }

        }

        int res;
        if(a==0){
            res=b;
        }
        else res=a;
        

        int ans= (n*2)/(res);

        return ans;

    }
};