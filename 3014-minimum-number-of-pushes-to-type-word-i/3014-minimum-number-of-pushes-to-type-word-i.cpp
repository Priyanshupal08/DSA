class Solution {
public:
    int minimumPushes(string word) {
        
        int n= word.size();

        int i=1;
        int ans=0;
        while(n>=8){
            ans+= (i*8);
            n-=8;
            i++;
        }

        ans+=(n*i);


        return ans;
    }
};