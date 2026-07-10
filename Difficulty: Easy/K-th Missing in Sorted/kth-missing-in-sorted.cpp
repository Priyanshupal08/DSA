class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) {
        
        int maxi= *max_element(arr.begin(), arr.end());
        
        
        vector<int> vec(maxi+1, -1);
        
        for(int i: arr){
            vec[i]=1;
        }
        
        
        for(int i=arr[0]; i<maxi; i++){
            
            if(vec[i]==-1){
                k--;
            }
            
            if(k==0){
                return i;
            }
            
        }
        
        return -1;
        
        
        
    }
};