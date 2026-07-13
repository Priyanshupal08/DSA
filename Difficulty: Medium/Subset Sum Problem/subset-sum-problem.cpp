class Solution {
  public:
  
    bool solve(int i, vector<int> arr, int sum, int k){
        
        if(sum==k){
            return true;
        }
        
        if(i==arr.size() || sum>k){
            return false;
        }
        
        
        
        // bool a= solve(i+1, arr, sum+arr[i], k);
        // bool b= solve(i+1, arr, sum, k);
        
        if(solve(i+1, arr, sum+arr[i], k)){
            return true;
        }
        
        if(solve(i+1, arr, sum, k)){
            return true;
        }
        
        return false;
    }
    
    bool isSubsetSum(vector<int>& arr, int k) {
        
        // int sum=0;
        return solve(0, arr, 0, k);
        
        
        
        
    }
};