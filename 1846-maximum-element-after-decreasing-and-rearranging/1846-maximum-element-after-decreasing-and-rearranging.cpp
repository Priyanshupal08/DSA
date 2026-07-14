class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(), arr.end());

        if(arr[0]!=0){
            arr[0]=1;
        }
        
        if(n==1){
            return 1;
        }

        int maxi=INT_MIN;
        for(int i=0; i<n-1; i++){

            if(abs(arr[i]-arr[i+1])<=1){
                maxi=max(maxi, arr[i+1]);
            }
            else{
                arr[i+1]=arr[i]+1;
                maxi=arr[i+1];
            }

        }

        return maxi;
    }
};