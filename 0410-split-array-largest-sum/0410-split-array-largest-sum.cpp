class Solution {
public:

    bool count(vector<int> arr, int k, int mid){

        int sum=0;

        int x= 0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum>mid){
                x++;
                sum=arr[i];
            }
        }

        x++;

        return x<=k;


    }

    int splitArray(vector<int>& nums, int k) {
        
        int maxi= *max_element(nums.begin(), nums.end());
        int sum= accumulate(nums.begin(), nums.end(), 0);

        long long s=maxi, e= sum;

        int ans=0;
        while(s<=e){

            int mid= s+(e-s)/2;

            if(count(nums, k, mid)){
                ans= mid;
                e=mid-1;
            }
            else{
                s= mid+1;
            }

        }

        return ans;

    }
};