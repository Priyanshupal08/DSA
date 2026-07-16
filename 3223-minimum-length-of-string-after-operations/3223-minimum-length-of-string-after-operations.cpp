class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.size();
        unordered_map<char,int> m;

        for(int i=0; i<n; i++){
            m[s[i]]++;
        }

        int ans=0;
        for(auto& i: m){


            if(i.second>=3){
                if(i.second%2==0){
                    ans+=2;
                }
                else{
                    ans+=1;
                }
            }

            else{
                ans+=i.second;
            }
        }

        return ans;


    }
};