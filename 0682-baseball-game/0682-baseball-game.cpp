class Solution {
public:
    int calPoints(vector<string>& op) {
        
        int n= op.size();

        vector<int> ans;

        for(int i=0; i<n; i++){

            if(op[i]=="C" && ans.size()>0){
                ans.pop_back();
            }

            else if(op[i]=="D"){
                int k= ans.back();
                ans.push_back(k*2);
                
            }

            else if(op[i]=="+"){
                int m= ans.size();

                ans.push_back(ans[m-1]+ans[m-2]);
                
            }

            else{
                ans.push_back(stoi(op[i]));
            }

        }

        int sum=0;

        for(int i=0; i<ans.size(); i++){
            sum+=ans[i];
        }

        return sum;
    }
};