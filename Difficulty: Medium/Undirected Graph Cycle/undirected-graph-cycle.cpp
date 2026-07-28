class Solution {
  public:
  
    queue<pair<int,int>> q;
  
    bool cycle(vector<vector<int>> &adj, vector<int> &visited){
        
        
        
        
        while(!q.empty()){
            
            
            pair<int,int> p= q.front();
            q.pop();
            
            visited[p.first]=1;
                
            for(int i: adj[p.first]){
                
                if(!visited[i]){
                    
                    visited[i]=1;
                    q.push({i,p.first});
                }
                
                
                else if(i!=p.second){
                    return true;
                }
                
            }
        }
        
        return false;
        
    }
  
  
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<vector<int>> adj(V);
        
        for(vector<int> i: edges){
            
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            
        }
        
        vector<int> visited(V,0);
        // visited[0]=1;
        
        for(int i=0; i<V; i++){
            
            if(!visited[i]){
                
                q.push({i,-1});
                
                if(cycle(adj, visited)){
                    return true;
                }
            }
            
        }
        return false;
        
        
    }
};