class Solution {
public:
    int brokenCalc(int s, int target) {
        
        
        int op=0;

        while(target!=s){

            if(s>target){
                op+= s-target;
                break;
            }
            
            if(target%2==0){
                target/=2;
                op++;
            }

            else{
                target+=1;
                op++;
            }
        }

        return op;

    }
};