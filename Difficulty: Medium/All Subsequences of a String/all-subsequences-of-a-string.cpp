class Solution {
  public:
  
    void sub(string s, vector<string> &res, string &temp, int i){
        
        if(i==s.size()){
            res.push_back(temp);
            return;
        }
        
        sub(s, res, temp, i+1);
        
        temp.push_back(s[i]);
        sub(s, res, temp, i+1);
        temp.pop_back();
        
    }
  
    vector<string> powerSet(string &s) {
        // Code here
        
        int i=0;
        vector<string> res;
        string temp="";
        
        sub(s, res, temp, i);
        
        sort(res.begin(), res.end());
        
        return res;
    }
};