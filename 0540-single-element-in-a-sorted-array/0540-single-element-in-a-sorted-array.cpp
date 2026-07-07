class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n= nums.size();
        int st=0, end=n-1;
        
        while(st<end){

            int mid= st+(end-st)/2;

            if(mid%2==0){
                mid=mid-1;
            }

            if(mid>0 && nums[mid]==nums[mid-1]){
                st=mid+1;
            }

            else{ 
                end= mid-1;
            }
        }

        return nums[st];
    }
};