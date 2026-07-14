class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        
        int n= ast.size();
        sort(ast.begin(), ast.end());
        
        for(int i=0; i<n; i++){

            if(mass>=ast[n-1]){
                return true;
            }

            if(mass>=ast[i]){
                mass+=ast[i];
            }

            else{
                return false;
            }
            
        }

        return true;


    }
};