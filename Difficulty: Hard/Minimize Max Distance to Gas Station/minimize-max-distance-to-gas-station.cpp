class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        
        int n= stations.size();
        
        if(n==1){
            return 0.00;
        }
        
        
        vector<int> vec((n-1),0);
        
        priority_queue<pair<double,int>> q;
        
        for(int i=0; i<n-1; i++){
            
            double d=(double)stations[i+1]-stations[i];
            q.push({d, i});
            
        }
        
        
        while(k--){
            
            pair<double,int> x= q.top();
            q.pop();
            vec[x.second]++;
            
            double z= ((x.first)*vec[x.second])/(vec[x.second]+1);
            
            q.push({z,x.second});
            
            
        }
        
        pair<double, int> ans= q.top();
        
        return ans.first;
        
    }
};