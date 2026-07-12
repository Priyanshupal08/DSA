class Solution {
public:
    string largestOddNumber(string num) {
        
        int a=0;
        
        while(num[a]<=0){
            a++;
        }
        
        int b=-1;
        
        
        for(int i=num.size()-1; i>=a; i--){
            if(num[i]%2!=0){
                b=i;
                break;
            }
        }
        
        string ans="";
        
        for(int i=a; i<=b; i++){
            ans+=num[i];
        }
        
        return ans;

    }
};