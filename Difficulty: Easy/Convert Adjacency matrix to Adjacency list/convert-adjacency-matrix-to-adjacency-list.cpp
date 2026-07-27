class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& mat) {
        // code here
        
        
        int n= mat.size();
        
        vector<vector<int>> ans(n);
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                if(mat[i][j]==1){
                    ans[i].push_back(j);
                }
                
            }
        }
        
        
        return ans;
        
    }
};