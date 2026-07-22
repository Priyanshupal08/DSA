class Solution {
public:

    int totalHammingDistance(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;

        
        for(int i=0; i<32; i++){

            int ones=0;
            for(int x: nums){
                if(x&(1<<i)) ones++;
            }

            int zeros= n-ones;

            ans+= (ones*zeros);
        }

        return ans;


        return ans;

    }
};