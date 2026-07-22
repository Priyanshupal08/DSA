class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        
        
        int n= arr.size();
        
        priority_queue<int, vector<int>, greater<int>> p;
        
        // p.push(arr[0]);
        // p.push(arr[1]);
        
        for(int i=0; i<n; i++){
            
            p.push(arr[i]);
            
        }
        
        int ans=0;
        
        while(p.size()>1){
            
            int a= p.top();
            p.pop();
            int b= p.top();
            p.pop();
            
            ans+=(a+b);
            p.push((a+b));
        }
        
        
        return ans;
        
    }
};