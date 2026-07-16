class Solution {
public:
    long long minimumSteps(string s) {
        
        int n=s.size();

        long long count=0;
        int i=0, j=n-1;

        while(i<j){

            if(s[i]=='1' && s[j]=='0'){
                swap(s[i],s[j]);
                count+= (j-i);
            }

            else if(s[i]=='0'){
                i++;
            }
            else if(s[j]=='1'){
                j--;
            }

        }

        return count;

    }
};