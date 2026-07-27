class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        
        int n=adj.size();
        
        vector<int> visited(n,0);
        
        vector<int> ans;
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            
            int k= q.front();
            q.pop();
            if(!visited[k]){
                ans.push_back(k);
                visited[k]=1;
            }
            
            for(int j: adj[k]){
                
                if(!visited[j]){
                    q.push(j);
                }
            }
            
        }
        
        return ans;
        
    }
};