class Solution {
public:
    bool doesAliceWin(string s) {
        
        int n= s.size();

        int count= 0;
        
        int chance=0;

        int ind=-1;

        int i=0;
        while(i<n){
            
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }

            if(count%2!=0){
                ind=i;
            }
            i++;

        }

        if(count==0){
            return false;
        }

        return true;


    }
};