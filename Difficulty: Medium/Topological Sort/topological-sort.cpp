class Solution {
  public:
  
    
    void traverse(vector<vector<int>> &adj, int u, vector<int> &visited, stack<int> &s){
        
        for(int i: adj[u]){
            
            if(!visited[i]){
                visited[i]=1;
                traverse(adj, i, visited, s);
            }
            
        }
        
        s.push(u);
        
        
    }
    
    
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>> adj(V);
        
        for(vector<int> i: edges){
            
            adj[i[0]].push_back(i[1]);
            // adj[i[1]].push_back(i[0]);
            
        }
        
        vector<int> visited(V,0);
        stack<int> s;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                visited[i]=1;
                traverse(adj, i, visited, s);
            }
        }
        
        
        vector<int> ans;
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
        
        
    }
};