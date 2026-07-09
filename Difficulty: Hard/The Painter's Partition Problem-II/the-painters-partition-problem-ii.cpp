class Solution {
  public:
  
  
    bool poss(vector<int> arr, int k, int mid){
        
        int x=0;
        int n= arr.size();
        
        int sum=0;
        
        for(int i=0; i<n; i++){
            
            sum+=arr[i];
            
            if(sum>mid){
                x++;
                sum=arr[i];
            }
            
        }
        
        x++;
        
        return x<=k;
    }
  
  
  
    int minTime(vector<int>& arr, int k) {
        // code here
        
        
        int n= arr.size();
        
        
        long long maxi= *max_element(arr.begin(), arr.end());
        long long sum= accumulate(arr.begin(), arr.end(), 0);
        
        
        long long s= maxi, e= sum;
        
        long long ans=0;
        
        while(s<=e){
            
            long long mid= s+(e-s)/2;
            
            if(poss(arr, k, mid)){
                ans= mid;
                e= mid-1;
            }
            
            else{
                
                s=mid+1;
            }
            
        }
        
        return (int)ans;
        
    }
};