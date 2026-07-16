class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.size();
        vector<int> m(26, 0);

        for(int i=0; i<n; i++){
            m[s[i]-'a']++;
        }

        int ans=0;
        for(int i: m){


            if(i>=3){
                if(i%2==0){
                    ans+=2;
                }
                else{
                    ans+=1;
                }
            }

            else{
                ans+=i;
            }
        }

        return ans;


    }
};