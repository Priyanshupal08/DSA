class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        int n= deck.size();
         unordered_map<int, int> m;

         for(int i: deck){
            m[i]++;
         }

        int res=0;
         for(auto i: m){
            res= gcd(i.second, res);
         }

         return res>1;

    }
};