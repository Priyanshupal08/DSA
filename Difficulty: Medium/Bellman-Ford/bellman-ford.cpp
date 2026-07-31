class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[src]=0;
        
        
        for(int i=0; i<V-1; i++){
            
            for(vector<int> j: edges){
                
                int u=j[0];
                int v=j[1];
                int d=j[2];
                
                if(dist[u]!=1e8){
                    
                    if(dist[u]+d< dist[v]){
                        dist[v]= dist[u]+d;
                    }
                    
                }
                
                
            }
            
        }
        
        
        
        // checking the nth cycle for negative cycle if it the graph has negative cycle then it will also decreease the distance between the points else it will not. 
        for(vector<int> i: edges){
            
            int u=i[0];
            int v=i[1];
            int d=i[2];
            
            if(dist[u]!=1e8){
                
                    if(dist[u]+d< dist[v]){
                        return {-1};
                    }
                
            }
            
        }
        
        return dist;
        
    }
};
