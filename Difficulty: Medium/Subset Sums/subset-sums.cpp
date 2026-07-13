class Solution {
  public:
  
    void solve(int i, vector<int> arr, int sum, vector<int> &ans){
        
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        
        solve(i+1, arr, sum+arr[i], ans);
        solve(i+1, arr, sum, ans);
        
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        
        vector<int> ans;
        
        int sum=0;
        
        solve(0, arr, sum, ans);
        
        return ans;
    
        
    }
};