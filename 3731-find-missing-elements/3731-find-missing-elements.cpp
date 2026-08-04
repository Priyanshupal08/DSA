class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int mini= *min_element(nums.begin(), nums.end());
        int maxi= *max_element(nums.begin(), nums.end());

        int n=nums.size();
        vector<int> pres(maxi+1,0);

        for(int i=0; i<n; i++){
            pres[nums[i]]=1;
        }

        vector<int> ans;
        for(int i=mini; i<pres.size(); i++){

            if(!pres[i]){
                ans.push_back(i);
            }
        }

        return ans;

    }
};