class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        
        int n= a.size();
        int m= b.size();
        vector<int> res;
        
        int i=0;
        int j=0;
        
        
        while(i<n && j<m){
            
            if(a[i]<b[j]){
                if(res.empty() || res.back()!= a[i]){
                    res.push_back(a[i]);
                }
                i++;
            }
            
            else if(a[i]>b[j]){
                if(res.empty() || res.back()!= b[j]){
                    res.push_back(b[j]);
                }
                j++;
            }
            
            else{
                if(res.empty() || res.back()!= b[j]){
                    res.push_back(b[j]);
                }
                i++;
                j++;
            }
            
        }
        
        while(i<n){
            if(res.empty() || res.back()!= a[i]){
                res.push_back(a[i]);
            }
            i++;
        }
        
        while(j<m){
            if(res.empty() || res.back()!= b[j]){
                res.push_back(b[j]);
            }
            j++;
        }
        
        return res;
        
    }
};