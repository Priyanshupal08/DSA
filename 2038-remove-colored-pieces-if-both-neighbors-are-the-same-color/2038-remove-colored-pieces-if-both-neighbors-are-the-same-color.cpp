class Solution {
public:
    bool winnerOfGame(string colors) {
        

        int n= colors.size();
        
        string s="";

        s.push_back(colors[0]);

        int a=0, b=0;

        for(int i=1; i<n-1; i++){

            if(colors[i]=='A' && colors[i+1]=='A'){
                if(colors[i-1]=='A'){
                    a++;
                }
            }

            else if(colors[i]=='B' && colors[i+1]=='B'){
                if(colors[i-1]=='B'){
                    b++;
                }
            }
        }

        cout<<a<<" "<<b;

        bool chance=1;

        while(a>0 && b>0){

            if(chance==1){
                a--;
                chance=0;
            }

            if(chance==0){
                b--;
                chance=1;
            }
        }

        if(a==0){
            return false;
        }

        else{
            return true;
        }

        return 0;
    }
};