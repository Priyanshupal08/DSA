class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int maxi= *max_element(arr.begin(), arr.end());

        vector<int> vec(maxi+1, -1);

        for(int i: arr){
            vec[i]=1;
        }
        
        for(int i=1; i<vec.size(); i++){

            if(vec[i]== -1){
                k--;
            }

            if(k==0){
                return i;
            }

        }

        if(k>0){
            return maxi+k;
        }

        return 0;
    }
};