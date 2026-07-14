class Solution {
  public:
  
    vector<string> ans;
    
    void solve(vector<vector<int>> mat, string str, int i, int j, int n, vector<vector<bool>> &visited){
        
        if(i==n-1 && j==n-1){
            ans.push_back(str);
            return;
        }
        
        if(i<0 || i>n-1 || j<0 || j>n-1 || mat[i][j]==0 || visited[i][j]){
            return;
        }
        
        visited[i][j]=1;
        
        
        // if((i+1)<n && mat[i+1][j]!=0){
            str+='D';
            solve(mat, str, i+1, j, n, visited);
            str.pop_back();
        // }
        
        // if((j-1)>=0 && mat[i][j-1]!=0){
            str+='L';
            solve(mat, str, i, j-1, n, visited);
            str.pop_back();
        // }
        
        // if((j+1)<n && mat[i][j+1]!=0){
            str+='R';
            solve(mat, str, i, j+1, n, visited);
            str.pop_back();
        // }
        
        // if((i-1)>=0 && mat[i-1][j]!=0){
            str+='U';
            solve(mat, str, i-1, j, n, visited);
            str.pop_back();
        // }
        
        visited[i][j]=0;
        
    }
  
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        
        string str="";
        
        int n= maze[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(n,0));
        
        solve(maze, str, 0, 0, n, visited);
        
        return ans;
        
        
    }
};