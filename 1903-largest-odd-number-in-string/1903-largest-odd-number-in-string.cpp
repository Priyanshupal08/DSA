class Solution {
public:
    string largestOddNumber(string num) {
        
        int b=-1;

        for(int i=num.size()-1; i>=0; i--){
            if(num[i]%2!=0){
                b=i;
                break;
            }
        }
        
        return num.substr(0,b+1);

    }
};