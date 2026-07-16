class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();

        vector<int> pref(n+2, 0);

        for(int i=0; i<n; i++){
            pref[i+1]= pref[i]+nums[i];
        }


        int m= pref.size();
        for(int i=0; i<n; i++){

            if((pref[i]) == (pref[n]- pref[i+1])){
                return i;
            }

        }

        return -1;

    }
};