class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n=grid.size();
        int m=grid[0].size();

        vector<int> vec;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vec.push_back(grid[i][j]);
            }
        }

        k=k%(m*n);

        reverse(vec.begin(), vec.end());
        reverse(vec.begin(), vec.begin()+k);
        reverse(vec.begin()+k, vec.end());


        int l=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                grid[i][j]= vec[l++];
            }
        }

        return grid;
        

    }
};