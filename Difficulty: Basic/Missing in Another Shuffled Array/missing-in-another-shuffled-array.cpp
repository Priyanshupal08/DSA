class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        
        int n= arr2.size();
        
        int i=0; 
        
        long long x=0;
        
        while(i<n){
            x^=arr1[i];
            x^=arr2[i];
            i++;
        }
        
        x^=arr1[n];
        
        return x;
        
    }
};