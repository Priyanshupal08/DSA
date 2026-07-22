class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n= mat.size();
        int m= mat[0].size();

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> p;

        for(int i=0; i<n; i++){

            int sum= accumulate(mat[i].begin(), mat[i].end(),0);
            p.push({sum,i});
        }


        vector<int> ans;
        while(k--){
            pair
            ans.push_back(p.top().second);
            p.pop();
        }

        return ans;

    }
};