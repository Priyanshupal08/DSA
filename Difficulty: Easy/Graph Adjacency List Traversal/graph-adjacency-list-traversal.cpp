class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        
        vector<vector<int>> ans(V);
        
        for(pair<int, int> i: edges){
            
            ans[i.first].push_back(i.second);
            ans[i.second].push_back(i.first);
            
        }
        
        return ans;
        
    }
};