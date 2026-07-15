class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        
        int n= nums1.size();
        int m= nums2.size();

        long long a=0, b=0;

        long long sum1=0, sum2=0;

        for(int i=0; i<n; i++){
            sum1+=nums1[i];

            if(nums1[i]==0){
                a++;
                sum1+=1;
            }
        }
        
        for(int i=0; i<m; i++){
            sum2+=nums2[i];

            if(nums2[i]==0){
                b++;
                sum2+=1;
            }

        }

        if(sum1>sum2){

            if(b==0){
                return -1;
            }

            return sum1;
        }

        else if(sum2>sum1){
            if(a==0){
                return -1;
            }

            return sum2;
        }

        else{
            return sum1;
        }

        return 0;

    }
};