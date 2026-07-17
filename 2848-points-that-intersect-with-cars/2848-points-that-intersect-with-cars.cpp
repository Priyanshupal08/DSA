class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        sort(nums.begin(), nums.end());

        int n=nums.size();

        int mini=nums[0][0];
        int maxi=nums[0][1];

        int ans= maxi-mini+1;

        int j=0;

        for(int i=1; i<n; i++){
            
            if(nums[i][0]>nums[j][1]){
                ans+= (nums[i][1]-nums[i][0]);
                ans++;
                j=i;
            }

            // else if(nums[i][0]==nums[i])

            else if((nums[i][0]<=nums[j][1]) && (nums[i][1]>nums[j][1])){
                ans+= (nums[i][1]-nums[j][1]);
                j=i;
            }
        }

        return ans;

    }
};