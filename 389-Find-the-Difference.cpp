class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char, int> m;

        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }

        char c;
        for(int i=0; i<t.size(); i++){
            if(m.find(t[i])!=m.end()){
                m[t[i]]--;
                if(m[t[i]]<0){
                    c=t[i];
                    break;
                }
            }
            else{
                c= t[i];
                break;
            }
        }

        return c;
    
        
    }

};