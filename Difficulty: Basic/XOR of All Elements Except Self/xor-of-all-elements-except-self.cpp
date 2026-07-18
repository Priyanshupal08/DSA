class Solution {
  public:
    vector<int> getXor(vector<int>& arr) {
        // code here
        
        int n= arr.size();
        
        int x=0;
        for(int i=0; i<n; i++){
            x^=arr[i];
        }
        
        vector<int> vec(n);
        
        for(int i=0; i<n; i++){
            vec[i]= x^arr[i];
        }
        
        return vec;
    
    }
};