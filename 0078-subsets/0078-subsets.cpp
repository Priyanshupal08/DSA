class Solution {
public:

    void sub(vector<int> nums, vector<vector<int>> &res, int i, vector<int>& temp){

        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }
        
        // exclude
        sub(nums, res, i+1, temp);

        // include
        temp.push_back(nums[i]);
        sub(nums, res, i+1, temp);
        temp.pop_back();


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> temp;
        int i=0;

        sub(nums, res, 0, temp);

        return res;

    }
};