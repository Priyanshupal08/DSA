class Solution {
public:
    int maxVowels(string s, int k) {
        
        int n= s.size();

        int i=0, j=0;
       
        int count=0;

        int ans=0;

        // int x= 0;
        while(j<n){
            
            if((j-i+1)>k){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    count--;
                }
                i++;   
            }

            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
                ans=max(ans, count);
            }
            j++;


        }

        return ans;

    }
};