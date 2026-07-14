class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int n=costs.size();

        int maxi= *max_element(costs.begin(), costs.end());
        int mini= *min_element(costs.begin(), costs.end());

        vector<int> freq(maxi+1,0);

        for(int i=0; i<n; i++){
            freq[costs[i]]++;
        }


        int ans=0;
        int i;
        for(i=mini; i<freq.size(); i++){
            
            if(coins<i){
                break;
            }

            int k= min(freq[i],coins/i);
            ans+= k;
            coins-= k*i;
        }

        return ans;


    }
};