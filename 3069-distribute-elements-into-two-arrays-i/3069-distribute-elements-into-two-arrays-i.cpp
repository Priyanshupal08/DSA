class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n= nums.size();

        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int a=0, b=0;

        for(int i=2; i<n; i++){
            if(arr1[a]>arr2[b]){
                arr1.push_back(nums[i]);
                a++;
            }
            else{
                arr2.push_back(nums[i]);
                b++;
            }
        }

        vector<int> ans;
        
        int p=0;
        while(p<=a){
            ans.push_back(arr1[p++]);
        }
        p=0;
        while(p<=b){
            ans.push_back(arr2[p++]);
        }

        return ans;

    }
};