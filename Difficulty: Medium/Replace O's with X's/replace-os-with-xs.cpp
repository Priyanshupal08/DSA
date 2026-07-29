class Solution {
  public:
  
  
    void dfs(int n, int m, int i, int j, vector<vector<char>> &grid, vector<vector<int>> &visited){
        
        if(i>0 && grid[i-1][j]=='O'){
            
            if(!visited[i-1][j]){
                visited[i-1][j]=1;
                dfs(n,m,i-1,j, grid, visited);
            }
        }
        
        if(i<n-1 && grid[i+1][j]=='O'){
            
            if(!visited[i+1][j]){
                visited[i+1][j]=1;
                dfs(n,m,i+1,j, grid, visited);
            }
        }
        
        if(j>0 && grid[i][j-1]=='O'){
            
            if(!visited[i][j-1]){
                visited[i][j-1]=1;
                dfs(n,m,i,j-1, grid, visited);
            }
        }
        
        if(j<m-1 && grid[i][j+1]=='O'){
            
            if(!visited[i][j+1]){
                visited[i][j+1]=1;
                dfs(n,m,i,j+1, grid, visited);
            }
        }
        
        
        
        
    }
  
  
    void fill(vector<vector<char>>& grid) {
        // Code here
        
        
        int n= grid.size();
        int m= grid[0].size();
        
        
        vector<vector<int>> visited(n, vector<int>(m,0));
        
        
        int i=0;
        int j;
        
        for(j=0; j<m; j++){
            if(grid[i][j]=='O'){
                visited[i][j]=1;
                dfs(n,m,i,j, grid, visited);
            }
        }
        
        
        j=0;
        for(i=0; i<n; i++){
            if(grid[i][j]=='O'){
                visited[i][j]=1;
                dfs(n,m,i,j, grid, visited);
            }
        }
        
        
        i=n-1;
        for(j=0; j<m; j++){
            if(grid[i][j]=='O'){
                visited[i][j]=1;
                dfs(n,m,i,j, grid, visited);
            }
        }
        
        j=m-1;
        for(i=0; i<n; i++){
            if(grid[i][j]=='O'){
                visited[i][j]=1;
                dfs(n,m,i,j, grid, visited);
            }
        }
        
        
        
        for(int p=0; p<n; p++){
            for(int q=0; q<m; q++){
                
                if(grid[p][q]=='O' && visited[p][q]==0){
                    grid[p][q]='X';
                }
                
            }
        }
        
        
        
        
    }
};