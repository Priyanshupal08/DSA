class Solution {
  public:
  
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
            
        vector<vector<int>> adj(V);
        
        for(auto &i: edges){
            
            adj[i[0]].push_back(i[1]);
            
        }
        
        
        vector<int> indeg(V,0);
        
        for(int i=0; i<V; i++){
            
            for(int j: adj[i]){
                indeg[j]++;
            }
            
        }
        
        
        queue<int> q;
        
        for(int i=0; i<V; i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        
        vector<int> res;
        
        
        while(!q.empty()){
            
            int u= q.front();
            res.push_back(u);
            q.pop();
            
            for(int v: adj[u]){
                
                indeg[v]--;
                if(indeg[v]==0){
                    q.push(v);
                }
                
            }
            
        }
        
        if(res.size()==V){
            return false;
        }
        
        return true;
        
        
        
    }
};