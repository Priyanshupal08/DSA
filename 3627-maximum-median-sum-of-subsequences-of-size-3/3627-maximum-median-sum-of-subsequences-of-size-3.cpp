class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        
        int n= nums.size();
        sort(nums.begin(), nums.end());

        long long sum=0;
        
        int i=0;
        int j=n-2;

        while(j>i){
            sum+=nums[j];
            j-=2;
            i++;
        }

        return sum;

    }
};