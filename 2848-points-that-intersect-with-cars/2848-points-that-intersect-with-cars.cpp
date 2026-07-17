class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        int n= nums.size();
        vector<int> vec(101, 0);

        for(int i=0; i<n; i++){
            for(int j=nums[i][0]; j<=nums[i][1]; j++){
                vec[j]=1;
            }
        }

        int ans=0;

        for(int i=0; i<101; i++){
            if(vec[i]>0){
                ans++;
            }
        }

        return ans;

    }
};