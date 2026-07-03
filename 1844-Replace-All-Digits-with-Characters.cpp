class Solution {
public:
    string replaceDigits(string s) {
        
        int n= s.size();
        
        for(int i=1; i<n; i+=2){
            char c= s[i-1]-'0'+s[i];
            s[i]=c;
        }

        return s;

    }
};