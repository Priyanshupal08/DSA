class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        
        for(int i=0; i<s1.size(); i++){
            v1[s1[i]-'a']++;
        }
        
        for(int i=0; i<s2.size(); i++){
            v2[s2[i]-'a']++;
        }
        
        for(int i=0; i<26; i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        
        return true;
    }
};