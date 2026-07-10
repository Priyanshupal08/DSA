class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
        int n= arr.size();
        
        int maxi=INT_MIN;
        
        int i=0, j=0;
        
        int sum=0;
        
        while(j<n){
            
            sum+=arr[j];
            
            if(j-i+1<k){
                j++;
            }
            
            else{
                
                maxi= max(maxi, sum);
                sum-=arr[i];
                i++;
                j++;
                
            }
            
        }
        
        return maxi;
        
    }
};