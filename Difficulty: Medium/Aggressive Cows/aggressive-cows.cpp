class Solution {
  public:
  
    bool poss(vector<int> arr, int k, int mid){
        
        k--;
        
        int i=1;
        int prev=arr[0];
        
        while(k>0 && i<arr.size()){
            
            if(arr[i]-prev>=mid){
                k--;
                prev=arr[i];
            }
            
            i++;
            
        }
        
        return k<=0;
        
    }
  
  
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        
        sort(arr.begin(), arr.end());
        
        
        int n=arr.size();
        
        
        int mini= *min_element(arr.begin(), arr.end());
        int maxi= *max_element(arr.begin(), arr.end());
        
        int s=1, e=(maxi-mini);
        
        int ans=0;
        
        while(s<=e){
            
            int mid= s+(e-s)/2;
            
            if(poss(arr, k, mid)){
                ans=mid;
                s=mid+1;
            }
            
            else{
                e=mid-1;
            }
            
            
        }
        
        return ans;
        
        
        
    }
};