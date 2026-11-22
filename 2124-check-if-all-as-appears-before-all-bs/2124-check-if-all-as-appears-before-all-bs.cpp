class Solution {
public:
    bool checkString(string s) {
        
        int a=0;
        int b=0;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='a'){
                if(b!=0){
                    return false;
                }
                a++;
            }

            else{
                b++;
            }
            
        }
        return true;

    }
};