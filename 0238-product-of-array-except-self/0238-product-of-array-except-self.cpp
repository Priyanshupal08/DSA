class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n= nums.size();

        int count=0;
        int ind=-1;

        long long prod=1;

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count++;
                if(count==1){
                    ind=i;
                }
                continue;
            }
            prod*=nums[i];
        }

        vector<int> ans(n,0);

        if(count==1){
            ans[ind]=prod;
        }
        else if(count<1){
            for(int i=0; i<n; i++){
                ans[i]= prod/nums[i];
            }
        }

        return ans;

    }
};