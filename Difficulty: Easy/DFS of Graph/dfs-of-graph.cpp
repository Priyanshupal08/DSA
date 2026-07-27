class Solution {
  public:
  
    vector<int> ans;
  
    void traverse(vector<vector<int>> &adj, int u, vector<int> &visited){
        
        
        if(visited[u]){
            return;
        }
        
        
        ans.push_back(u);
        visited[u]=1;
        
        
        for(auto& j: adj[u]){
            
            if(!visited[j]){
                traverse(adj, j, visited);
            }
            
        }
        
    }
  
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        int n= adj.size();
        vector<int> visited(n,0);
        
        traverse(adj, 0, visited);
        
        return ans;
        
        
        
        
    }
};