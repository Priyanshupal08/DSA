class Solution {
public:
    bool divisorGame(int n) {
        
        int chance=1;

        while(n>1){
            // for(int i=1; i<=n/2; i++){
            //     if(n%i==0){
            //         n-=i;
            //         chance=0;
            //     }
            // }
            n-=1;
            chance= (chance==1)? 0:1;
        }

        if(chance){
            return false;
        }

        return true;

    }
};