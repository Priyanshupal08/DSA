class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        
        int n=str1.size();
        int m=str2.size();

        int i=0, j=0; 

        while(i<n && j<m){

            if(str1[i]==str2[j]){
                i++;
                j++;
            }

            else{
                if(((int)str1[i]+1)%26 == (int)str2[j]%26){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }

        }

        if(i==n && j<m){
            return false;
        }

        return true;

    }
};