class Solution {
public:
    int minChanges(string s) {
        
        int count=0;
        int ones=0;
        int zeros=0;

        for(int i=0; i<s.size(); i++){

            if(s[i]=='1'){
                if(zeros%2!=0){
                    zeros++;
                    count++;
                }

                else{
                    ones++;
                }
            }

            else{
                if(ones%2!=0){
                    ones++;
                    count++;
                }
                else{
                    zeros++;
                }
            }

        }

        return count;

    }
};