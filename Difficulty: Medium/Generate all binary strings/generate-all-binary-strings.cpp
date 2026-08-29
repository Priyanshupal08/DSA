class Solution {
    public:

      vector<string> ans;

      void sub(string res, int n){

          if(res.size()==n){
              ans.push_back(res);
              return;
          }

          sub(res+'0', n);
          sub(res+'1', n);

      }


      vector<string> binstr(int n) {
          // code here
          string res="";
          sub(res, n);

          return ans;
      }
  };