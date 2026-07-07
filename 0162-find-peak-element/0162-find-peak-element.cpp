class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        

        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } 

            else {
                high = mid;
            }
        }


        return low;
        // int n=nums.size();
        
        // for(int i=0; i<n; i++){
        //     if(i==0 && nums[i]>nums[i+1] && nums[i]>nums[-1]){
        //         return i;
        //     }
            
        //     if(i==n-1 && nums[i]>nums[i-1] && nums[i]>nums[n]){
        //         return i;
        //     }
            
        //     if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
        //         return i;
        //     }
        // }

    }

    
};