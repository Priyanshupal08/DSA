class Solution {
  public:
  
  
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        
        vector<vector<pair<int,int>>> adj(V);
        
        for(vector<int> i: edges){
            
            adj[i[0]].push_back({i[2],i[1]});
            adj[i[1]].push_back({i[2],i[0]});
            
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        
        q.push({0,src});
        
        vector<int> dist(V,INT_MAX);
        
        dist[src]=0;
        
        while(!q.empty()){
            
            pair<int,int> p= q.top();
            q.pop();
            
            int a= p.second;
            int d= p.first;
            
            for(auto &x: adj[a]){
                
                if(dist[x.second]> d+x.first){
                    dist[x.second]= d+x.first;
                    q.push({d+x.first, x.second});
                }
            }
            
            
        }
        
        return dist;
        
    }
};