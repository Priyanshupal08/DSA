class Solution {
public:
    string breakPalindrome(string str) {
        
        int n= str.size();

        int j=0;
        int i;

        int m;
        if(n%2==0){
            m=n/2;
        }
        else{
            m= (n-1)/2;
        }

        for(i=0; i<m; i++){

            if(str[i]=='a') j++;

            if(str[i]>'a'){
                str[i]='a';
                break;
            }
        }

        if(j==m){
            if(n==1){
                return "";
            }

            else{
                str[n-1]='b';
            }
        }

        return str;

    }
};