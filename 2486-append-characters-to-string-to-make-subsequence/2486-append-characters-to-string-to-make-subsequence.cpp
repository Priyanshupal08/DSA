class Solution {
public:
    int appendCharacters(string s, string t) {

        int n=s.size(), m= t.size();

        int i=0, j=0; 

        int ans=0;

        while(i<n && j<m){

            if(s[i]==t[j]){
                i++;
                j++;
            }

            else{
                while(i<n && s[i]!=t[j]){
                    i++;
                }

                if(i==n) ans=m-j;

                else{
                    i++;
                    j++;
                }

            }
        }

        if(i==n && j!=m){
            ans=m-j;
        }

        return ans;

    }
};