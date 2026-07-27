class Solution {
  public:
    vector<vector<int>> adjToMat(vector<vector<int>>& adj) {
        // code here
        
        int n= adj.size();
        
        vector<vector<int>> ans(n, vector<int>(n,0));
        
        for(int i=0; i<n; i++){
            for(int j: adj[i]){
                ans[i][j]=1;
            }
        }
        
        
        return ans;
        
    }
};