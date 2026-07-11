class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n=a.size();
        int m=b.size();
        
        if(n>m){
            return kthElement(b,a,k);
        }
        
        
        int N=n+m;
        
        int left= k;
        int s= max(k-m, 0), e= min(k, n);
        
        
        while(s<=e){
            
            int mid1= (s+e)/2;
            int mid2= left-mid1;
            
            int l1=INT_MIN, l2=INT_MIN;    
            int r1=INT_MAX, r2=INT_MAX;    
            
            if(mid1<n) r1= a[mid1];
            if(mid2<m) r2= b[mid2];
            
            if((mid1-1)>=0) l1= a[mid1-1];
            if((mid2-1)>=0) l2= b[mid2-1];
            
            if(l1<=r2 && l2<=r1){
                
                return max(l1,l2);
                
            }
            
            else if(l1>r2) e=mid1-1;
            
            else s=mid1+1;
        }
        
        return 0;
    }
};