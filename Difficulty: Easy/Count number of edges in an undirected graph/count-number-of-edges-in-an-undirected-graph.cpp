class Solution {
  public:
    int countEdges(vector<vector<int>>& adj) {
        // code here
        
        int n= adj.size();
        
        int edges=0;
        
        for(int i=0; i<n; i++){
            
            int k= adj[i].size();
            edges+=k;
            
            // for(int j=0; j<n; j++){
                
            //     if(adj[i][j])
            //         edges++;
            // }
            
        }
        
        return edges/2;
    }
};