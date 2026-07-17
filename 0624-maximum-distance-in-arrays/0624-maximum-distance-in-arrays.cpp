class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        
        int n= arr.size();

        int mini= arr[0][0];
        int maxi= arr[0].back();

        int ans= 0;

        for(int i=1; i<n; i++){

            int a= arr[i][0];
            int b= arr[i].back();

            ans= max(ans, abs(b- mini));
            ans= max(ans, abs(maxi- a));

            mini= min(mini, a);
            maxi= max(maxi, b);

        }

        return ans;

    }
};