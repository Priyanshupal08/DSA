class Solution {
public:

    void valid(int n,vector<string> &res, string &s, int o, int c){

        if(s.size()==(2*n)){
            res.push_back(s);
            return;
        }

        if(o<n){
            s.push_back('(');
            valid(n, res, s, o+1, c);
            s.pop_back();
        }

        if(c<o){
            s.push_back(')');
            valid(n, res, s, o, c+1);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        
        vector<string> res;
        string s="";
        int o=0, c=0;
        valid(n, res, s, o, c);

        return res;


    }
};