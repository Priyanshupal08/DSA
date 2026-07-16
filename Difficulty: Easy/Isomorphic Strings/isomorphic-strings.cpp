class Solution {
  public:
    bool areIsomorphic(string &s, string &t) {
        
        int n= s.size();
        map<char,char> m;
        vector<int> vec(26,0);

        for(int i=0; i<n; i++){


            if(m.find(s[i])!=m.end()){
                if(t[i]!=m[s[i]]) return false;

            }

            else{

                if(vec[t[i]-'a']!=0){
                    return false;
                }
                m[s[i]]=t[i];
                vec[t[i]-'a']++;
            }

        }

        return true;
        
    }
};